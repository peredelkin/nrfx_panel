/*
 * nmbs_port.c
 *
 *  Created on: 29 янв. 2025 г.
 *      Author: ruslan
 */

#include "nmbs_port.h"

void uarte_tx_done_handler(nrfx_uarte_event_t const* p_event, void* p_context) {
	rs485_uarte_t* uarte = (rs485_uarte_t*)p_context;
	//переключиться на прием
	uarte->set_rx();
	//передача завершена
	uarte->tx.count = p_event->data.rxtx.bytes;
	if(uarte->tx.done == false) uarte->tx.done = true;
}

void uarte_rx_done_handler(nrfx_uarte_event_t const* p_event, void* p_context) {
	rs485_uarte_t* uarte = (rs485_uarte_t*)p_context;
	//прием завершен
	uarte->rx.count = p_event->data.rxtx.bytes;
	if(uarte->rx.done == false) uarte->rx.done = true;
}

void uarte_error_handler(nrfx_uarte_event_t const* p_event, void* p_context) {
	rs485_uarte_t* uarte = (rs485_uarte_t*)p_context;
	uint32_t error_mask = p_event->data.error.error_mask;

	if(error_mask & NRF_UARTE_ERROR_OVERRUN_MASK) {

	}

	if(error_mask & NRF_UARTE_ERROR_PARITY_MASK) {

	}

	if(error_mask & NRF_UARTE_ERROR_FRAMING_MASK) {

	}

	if(error_mask & NRF_UARTE_ERROR_BREAK_MASK) {

	}

	//прием завершен
	uarte->rx.done = true;
}

void uarte_event_handler(nrfx_uarte_event_t const* p_event, void* p_context) {
	switch(p_event->type) {
	case NRFX_UARTE_EVT_TX_DONE:
		uarte_tx_done_handler(p_event, p_context);
		break;
	case NRFX_UARTE_EVT_RX_DONE:
		uarte_rx_done_handler(p_event, p_context);
		break;
	case NRFX_UARTE_EVT_ERROR:
		uarte_error_handler(p_event, p_context);
		break;
	default:
		__NOP();
		//__BKPT(0);
		break;
	}
}

void uarte_rx_timeout_handler(void *p_context) {
	rs485_uarte_t* uarte = (rs485_uarte_t*)p_context;

	uarte->rx.timeout = true;

	nrfx_timer_compare_int_disable(&(uarte->timer), uarte->rx.timeout_ch);
	nrfx_timer_disable(&(uarte->timer));
}

void uarte_tx_timeout_handler(void *p_context) {
	rs485_uarte_t* uarte = (rs485_uarte_t*)p_context;

	uarte->tx.timeout = true;

	nrfx_timer_compare_int_disable(&(uarte->timer), uarte->tx.timeout_ch);
	nrfx_timer_disable(&(uarte->timer));
}

void uarte_timeout_handler(nrf_timer_event_t event_type, void *p_context) {
	rs485_uarte_t* uarte = (rs485_uarte_t*)p_context;

	switch(event_type) {
	case NRF_TIMER_EVENT_COMPARE0:
		uarte_rx_timeout_handler(p_context);
		break;
	case NRF_TIMER_EVENT_COMPARE1:
		uarte_tx_timeout_handler(p_context);
		break;
	default:
		nrfx_timer_disable(&(uarte->timer));
		nrfx_timer_clear(&(uarte->timer));
		break;
	}
}

//TODO: перечитать описание в nanomodbus и проверить return значения в зависимости от условий
int32_t nmbs_read_serial(uint8_t* buf, uint16_t count, int32_t byte_timeout_ms, void* arg) {
	//заглушка flush fifo
	//TODO: убедиться, что fifo сбрасывается драйвером, иначе сделать в прерывании уарт
	if(byte_timeout_ms == 0) return 0;

	rs485_uarte_t* uarte = (rs485_uarte_t*)arg;

	//таймаут все еще тикает?
	while(nrfx_timer_is_enabled(&(uarte->timer)));

	//DIR принудительно на прием
	uarte->set_rx();

	//установка флагов
	uarte->rx.done = false;
	uarte->rx.timeout = false;

	//старт чтения
	nrfx_err_t err = nrfx_uarte_rx(&(uarte->uarte), buf, count);

	//если шина занята или еще что-то
	if(err != NRFX_SUCCESS) return -1;

	if(byte_timeout_ms > 0) {
		//расчитать количество тиков таймера
		uint32_t ticks = nrfx_timer_ms_to_ticks(&(uarte->timer), (uint32_t)byte_timeout_ms);
		//установить компаратор таймаута чтения
		nrfx_timer_compare(&(uarte->timer), uarte->rx.timeout_ch, ticks, true);
		//сбросить таймер
		nrfx_timer_clear(&(uarte->timer));
		//запустить таймер
		nrfx_timer_enable(&(uarte->timer));
	}

	//ждать таймаута или окончания приема
	while((uarte->rx.timeout == false) && (uarte->rx.done == false));

	//таймаут чтения
	if(uarte->rx.timeout == true) {
		//отменить прием
		nrfx_uarte_rx_abort(&(uarte->uarte));
		return 0; //TODO: вернуть количество действительно полученных данных
	}

	//все данные получены
	if(uarte->rx.done == true) {
		//выключить прерывание таймаута чтения
		nrfx_timer_compare_int_disable(&(uarte->timer), uarte->rx.timeout_ch);
		//остановить таймер
		nrfx_timer_disable(&(uarte->timer));
		//вернуть количество прочитанных байт.
		return (int32_t)(uarte->rx.count);
	}

	return -1;
}

int32_t nmbs_write_serial(const uint8_t* buf, uint16_t count, int32_t byte_timeout_ms, void* arg) {
	rs485_uarte_t* uarte = (rs485_uarte_t*)arg;

	//таймаут все еще тикает?
	while(nrfx_timer_is_enabled(&(uarte->timer)));

	//DIR на передачу
	uarte->set_tx();

	//установка влагов
	uarte->tx.done = false;
	uarte->tx.timeout = false;

	//старт передачи
	nrfx_err_t err = nrfx_uarte_tx(&(uarte->uarte), buf, count);

	//если шина занята или еще что-то
	if(err != NRFX_SUCCESS) {
		//DIR на прием
		uarte->set_rx();
		return -1;
	}

	//не ждать конца передачи
	if(byte_timeout_ms == 0) return count;

	if(byte_timeout_ms > 0) {
		//расчет количества тиков таймера
		uint32_t ticks = nrfx_timer_ms_to_ticks(&(uarte->timer), (uint32_t)byte_timeout_ms);
		//установка компаратора таймаута записи
		nrfx_timer_compare(&(uarte->timer), uarte->tx.timeout_ch, ticks, true);
		//сброос таймера
		nrfx_timer_clear(&(uarte->timer));
		//запуск таймера
		nrfx_timer_enable(&(uarte->timer));
	}

	//ждать таймаута или окончания передачи
	while((uarte->tx.timeout == false) && (uarte->tx.done == false));

	if(uarte->tx.timeout == true) {
		//отмена передачи
		nrfx_uarte_tx_abort(&(uarte->uarte));
		//DIR на прием
		uarte->set_rx();
		return 0; //TODO: вернуть количество действительно полученных данных
	}

	if(uarte->tx.done == true) {
		//выключение прерывания таймаута записи
		nrfx_timer_compare_int_disable(&(uarte->timer), uarte->tx.timeout_ch);
		//остановка таймера
		nrfx_timer_disable(&(uarte->timer));
		//возврат количества записанных байт
		return (int32_t)(uarte->tx.count);
	}

	return -1;
}
