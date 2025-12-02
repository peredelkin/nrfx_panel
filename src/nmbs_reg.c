/*
 * nmbs_reg.c
 *
 *  Created on: 2 дек. 2025 г.
 *      Author: ruslan
 */

#include "nmbs_reg.h"
#include "reg_list.h"
//#include "nmbs_port.h"
#include "buf_reg.h"
#include "delay.h"

enum {
	MODBUS_RTU_CUSTOM_FUNC_REG_READ = 0x64,
	MODBUS_RTU_CUSTOM_FUNC_REG_WRITE,
	MODBUS_RTU_CUSTOM_FUNC_CAN_READ,
	MODBUS_RTU_CUSTOM_FUNC_CAN_WRITE
};

#pragma pack(push, 1)
struct {
		reg_id_t id;
		uint8_t count;
	} modbus_regs_request;
#pragma pack(pop)

#pragma pack(push, 1)
struct {
		reg_id_t id;
		uint8_t count;
	} modbus_regs_response;
#pragma pack(pop)

#define NMBS_PDU_SIZE_MAX 252
uint8_t nmbs_request_data[NMBS_PDU_SIZE_MAX];
uint8_t nmbs_response_data[NMBS_PDU_SIZE_MAX];

//TODO: причесать этот колхоз
err_t nmbs_read_regs(nmbs_t* nmbs, const reg_list_t* list, reg_t* reg, uint8_t count) {
	if((nmbs == NULL) || (reg == NULL)) return E_MODBUS_REG_NULL_POINTER;

	reg_t* reg_ptr = reg;

	//вычислим ожидаемый размер данных
	size_t response_data_size = sizeof(modbus_regs_response);
	for(int reg_count = 0; reg_count < count; reg_count++) {
		if(reg_ptr == NULL) return E_MODBUS_REG_NULL_POINTER;
		response_data_size += 4 + 1 + 1 + reg_data_size(reg_ptr);
		reg_ptr = regs_next(list, reg_ptr);
	}

	nmbs_error error = NMBS_ERROR_NONE;

	//заполним запрос
	modbus_regs_request.id = reg->id;
	modbus_regs_request.count = count;

	//скопируем запрос
	memcpy(nmbs_request_data, &modbus_regs_request, sizeof(modbus_regs_request));

	//отправим запрос
	error = nmbs_send_raw_pdu(nmbs, MODBUS_RTU_CUSTOM_FUNC_REG_READ, nmbs_request_data, sizeof(modbus_regs_request));

	if(error != NMBS_ERROR_NONE) return E_MODBUS_REG_NMBS_ERROR;

	//получим данные
	error = nmbs_receive_raw_pdu_response(nmbs, nmbs_response_data, response_data_size);

	if(error != NMBS_ERROR_NONE) return E_MODBUS_REG_NMBS_ERROR;

	//прочитаем заголовок
	memcpy(&modbus_regs_response, nmbs_response_data, sizeof(modbus_regs_response));

	//TODO: проверить ответ!

	reg_ptr = NULL;
	size_t index = sizeof(modbus_regs_response);
	reg_id_t p_id = 0;
	reg_type_t p_type = 0;
	size_t p_size = 0;
	uint8_t p_data[4];

	for(int reg_count = 0; reg_count < count; reg_count++) {
		//прочитаем данные
		int reg_getted = buf_get_reg_atomic(nmbs_response_data, &index, NMBS_PDU_SIZE_MAX, &p_id, &p_type, &p_size, p_data, sizeof(p_data));
		if(reg_getted < 0) return E_MODULE_REG_INVALID_SIZE;

		reg_ptr = regs_find(list, p_id);
		if(reg_ptr == NULL) return E_MODBUS_REG_NULL_POINTER;

		//сравним тип и размер
		if((reg_ptr->type == p_type) && (reg_data_size(reg_ptr) == p_size)) {
			memcpy(reg_ptr->data, p_data, p_size);
		} else {
			return E_MODULE_REG_INVALID_SIZE;
		}
	}

	return E_NO_ERROR;
}

//TODO: причесать этот колхоз
err_t nmbs_write_regs(nmbs_t* nmbs, const reg_list_t* list, reg_t* reg, uint8_t count) {
	if((nmbs == NULL) || (reg == NULL)) return NMBS_ERROR_INVALID_ARGUMENT;

	reg_t* reg_ptr = reg;

	nmbs_error error = NMBS_ERROR_NONE;

	//заполним заголовок запроса
	modbus_regs_request.id = reg_ptr->id;
	modbus_regs_request.count = count;

	//скопируем заголовок запроса
	memcpy(nmbs_request_data, &modbus_regs_request, sizeof(modbus_regs_request));

	//получим смещение для заполнения запроса данными
	size_t index = sizeof(modbus_regs_request);

	//
	int reg_putted = 0;

	//вычислим размер данных
	size_t request_data_size = sizeof(modbus_regs_request);
	for(int reg_count = 0; reg_count < count; reg_count++) {
		if(reg_ptr == NULL) return E_MODBUS_REG_NULL_POINTER;
		reg_putted = buf_put_reg_atomic(nmbs_request_data, &index, NMBS_PDU_SIZE_MAX, reg_ptr);
		if(reg_putted < 0) return E_MODULE_REG_INVALID_SIZE;
		request_data_size += reg_putted;
		reg_ptr = regs_next(list, reg_ptr);
	}

	//отправим запрос
	error = nmbs_send_raw_pdu(nmbs, MODBUS_RTU_CUSTOM_FUNC_REG_WRITE, nmbs_request_data, request_data_size);

	if(error != NMBS_ERROR_NONE) return error;

	//получим данные
	error = nmbs_receive_raw_pdu_response(nmbs, nmbs_response_data, sizeof(modbus_regs_response));

	//TODO: проверить ответ!

	if(error != NMBS_ERROR_NONE) return error;

	return error;
}

//=================================================================
//! Тип слова управления.
typedef uint32_t control_t;

//! Общие биты управления.
enum _E_Base_Control {
    CONTROL_NONE = 0x00, //!< Ничего.
    CONTROL_RESET = 0x01, //!< Сброс.
    CONTROL_ENABLE = 0x02, //!< Разрешение работы.
    CONTROL_START = 0x04, //!< Запуск.
    CONTROL_STOP = 0x08, //!< Останов.
    CONTROL_USER = 0x10 //!< Управление модулей.
};

//! Тип слова статуса.
typedef uint32_t status_t;

//! Общие биты статуса.
enum _E_Base_Status {
    STATUS_NONE = 0, //!< Ничего.
    STATUS_READY =		(1 << 0),	//!< Готовность.
    STATUS_VALID =		(1 << 1),	//!< Правильность выходных данных.
    STATUS_RUN =		(1 << 2),	//!< Работа.
    STATUS_ERROR =		(1 << 3),	//!< Ошибка.
    STATUS_WARNING =	(1 << 4),	//!< Предупреждение.
    STATUS_USER =		(1 << 5)	//!< Статусы модулей.
};

//! Перечисление возможных бит управления.
enum _E_Modbus_To_Can_Control {
    MODBUS_TO_CAN_CONTROL_NONE = CONTROL_NONE,
	MODBUS_TO_CAN_CONTROL_RESET = CONTROL_RESET,
	MODBUS_TO_CAN_CONTROL_ENABLE = CONTROL_ENABLE,
	MODBUS_TO_CAN_CONTROL_START = CONTROL_START,
	MODBUS_TO_CAN_CONTROL_STOP =  CONTROL_STOP,
	MODBUS_TO_CAN_CONTROL_READ = (CONTROL_USER << 0),
	MODBUS_TO_CAN_CONTROL_WRITE = (CONTROL_USER << 1)
};

//! Перечисление возможных бит статуса.
enum _E_Modbus_To_Can_Status {
    MODBUS_TO_CAN_STATUS_NONE = STATUS_NONE,
	MODBUS_TO_CAN_STATUS_READY = STATUS_READY,
	MODBUS_TO_CAN_STATUS_VALID = STATUS_VALID,
	MODBUS_TO_CAN_STATUS_RUN = STATUS_RUN,
	MODBUS_TO_CAN_STATUS_ERROR = STATUS_ERROR,
	MODBUS_TO_CAN_STATUS_WARNING = STATUS_WARNING,
	MODBUS_TO_CAN_STATUS_READ_DONE = (STATUS_USER << 0),
	MODBUS_TO_CAN_STATUS_WRITE_DONE = (STATUS_USER << 1)
};

//modbus to can read
#pragma pack(push, 1)
struct {
	uint8_t dev_id;
	reg_id_t reg_id;
	size_t reg_size;
} modbus_to_can_read_request;
#pragma pack(pop)

#pragma pack(push, 1)
struct {
	uint8_t dev_id;
	reg_id_t reg_id;
	iql_t reg_data;
	control_t control;
	status_t status;
} modbus_to_can_read_response;
#pragma pack(pop)

//modbus to can write
#pragma pack(push, 1)
struct {
	uint8_t dev_id;
	reg_id_t reg_id;
	iql_t reg_data;
	size_t reg_size;
} modbus_to_can_write_request;
#pragma pack(pop)

#pragma pack(push, 1)
struct {
	uint8_t dev_id;
	reg_id_t reg_id;
	control_t control;
	status_t status;
} modbus_to_can_write_response;
#pragma pack(pop)

err_t nmbs_to_can_read_reg(nmbs_t* nmbs, uint8_t dev_id, reg_t* reg) {
	if((nmbs == NULL) || (reg == NULL)) return E_MODBUS_REG_NULL_POINTER;

	nmbs_error error = NMBS_ERROR_NONE;

	//заполним запрос
	modbus_to_can_read_request.dev_id = dev_id;
	modbus_to_can_read_request.reg_id = reg->id;
	modbus_to_can_read_request.reg_size = reg_data_size(reg);

	//скопируем запрос
	memcpy(nmbs_request_data, &modbus_to_can_read_request, sizeof(modbus_to_can_read_request));

	do {
		//отправим данные
		error = nmbs_send_raw_pdu(nmbs, MODBUS_RTU_CUSTOM_FUNC_CAN_READ, nmbs_request_data, sizeof(modbus_to_can_read_request));

		if(error != NMBS_ERROR_NONE) return E_MODBUS_REG_NMBS_ERROR;

		//получим данные
		error = nmbs_receive_raw_pdu_response(nmbs, nmbs_response_data, sizeof(modbus_to_can_read_response));

		if(error != NMBS_ERROR_NONE) return E_MODBUS_REG_NMBS_ERROR;

		//скопируем ответ
		memcpy(&modbus_to_can_read_response, nmbs_response_data, sizeof(modbus_to_can_read_response));

		//если модуль не готов
		if(!(modbus_to_can_read_response.status & MODBUS_TO_CAN_STATUS_READY)) {
			return E_CANCELED;
		}

		//чтение закончено
		if(!(modbus_to_can_read_response.control & MODBUS_TO_CAN_CONTROL_ENABLE) &&
				(modbus_to_can_read_response.status & MODBUS_TO_CAN_STATUS_READ_DONE)) {
			//чтение законечно без ошибок
			if(modbus_to_can_read_response.status & MODBUS_TO_CAN_STATUS_VALID) {
				//id и reg_id совпадают
				if((modbus_to_can_read_response.dev_id == dev_id) &&
						(modbus_to_can_read_response.reg_id == reg->id)) {
					reg_set_valuel(reg, modbus_to_can_read_response.reg_data);
					return E_NO_ERROR;
				}
			}

			return E_CANCELED;
		}

		delay_ms(10);

	} while(modbus_to_can_read_response.control & MODBUS_TO_CAN_CONTROL_ENABLE);

	return E_STATE;
}

err_t nmbs_to_can_write_reg(nmbs_t* nmbs, uint8_t dev_id, reg_t* reg) {
	if((nmbs == NULL) || (reg == NULL)) return E_MODBUS_REG_NULL_POINTER;

	nmbs_error error = NMBS_ERROR_NONE;

	//заполним запрос
	modbus_to_can_write_request.dev_id = dev_id;
	modbus_to_can_write_request.reg_id = reg->id;
	modbus_to_can_write_request.reg_data = reg_valuel(reg);
	modbus_to_can_write_request.reg_size = reg_data_size(reg);

	//скопируем запрос
	memcpy(nmbs_request_data, &modbus_to_can_write_request, sizeof(modbus_to_can_write_request));

	do {
		//отправим данные
		error = nmbs_send_raw_pdu(nmbs, MODBUS_RTU_CUSTOM_FUNC_CAN_WRITE, nmbs_request_data, sizeof(modbus_to_can_write_request));

		if(error != NMBS_ERROR_NONE) return E_MODBUS_REG_NMBS_ERROR;

		//получим данные
		error = nmbs_receive_raw_pdu_response(nmbs, nmbs_response_data, sizeof(modbus_to_can_write_response));

		if(error != NMBS_ERROR_NONE) return E_MODBUS_REG_NMBS_ERROR;

		//скопируем ответ
		memcpy(&modbus_to_can_write_response, nmbs_response_data, sizeof(modbus_to_can_write_response));

		//модуль не готов
		if(!(modbus_to_can_write_response.status & MODBUS_TO_CAN_STATUS_READY)) {
			return E_CANCELED;
		}

		//запись закончена
		if((modbus_to_can_write_response.control & MODBUS_TO_CAN_CONTROL_ENABLE) &&
				(modbus_to_can_write_response.status & MODBUS_TO_CAN_STATUS_WRITE_DONE)) {
			//запись закончена без ошибок
			if(modbus_to_can_write_response.status & MODBUS_TO_CAN_STATUS_VALID) {
				//id и reg_id совпадают
				if((modbus_to_can_write_response.dev_id == dev_id) &&
						(modbus_to_can_write_response.reg_id == reg->id)) {
					return E_NO_ERROR;
				}
			}

			return E_CANCELED;
		}

		delay_ms(10);

	} while (modbus_to_can_write_response.control & MODBUS_TO_CAN_CONTROL_ENABLE);

	return E_STATE;
}

err_t nmbs_read_reg(nmbs_t* nmbs, const reg_list_t* list, reg_t* reg) {
	switch(list->id) {
	case APP_REGS_ID:
		return nmbs_read_regs(nmbs, list, reg, 1);
	default:
		return nmbs_to_can_read_reg(nmbs, list->id, reg);
	}
}

err_t nmbs_write_reg(nmbs_t* nmbs, const reg_list_t* list, reg_t* reg) {
	switch(list->id) {
	case APP_REGS_ID:
		return nmbs_write_regs(nmbs, list, reg, 1);
	default:
		return nmbs_to_can_write_reg(nmbs, list->id, reg);
	}
}

//=============================================================
