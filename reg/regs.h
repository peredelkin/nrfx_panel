#ifndef REG_REGS_H
#define REG_REGS_H

#include <stddef.h>
#include "defs/defs.h"
#include "reg.h"
#include "app/app_reg_ids.h"
#include "mc/mc_reg_ids.h"

#define REG_LIST_SIZE 2

typedef struct _S_Reg_List {
	const reg_t* regs;
	size_t size;
	uint8_t id;
} reg_list_t;


extern const reg_list_t reg_list[];


/**
 * Ищет регистр по идентификатору.
 * @param id Идентификатор.
 * @return Указатель на найденный регистр, либо NULL.
 */
EXTERN reg_t* regs_find(const reg_list_t* list, reg_id_t id);

/**
 * Получает первый регистр в списке.
 * @return Первый регистр в списке.
 */
EXTERN reg_t* regs_first(const reg_list_t* list);

/**
 * Получает конец списка регистров.
 * @return Конец списка регистров.
 */
EXTERN reg_t* regs_end(const reg_list_t* list);

/**
 * Получает следующий регистр в списке. NULL если регистров больше нет.
 * @param reg Текущий регистр.
 * @return Следующий регистр в списке. NULL если регистров больше нет.
 */
EXTERN reg_t* regs_next(const reg_list_t* list, reg_t* reg);

/**
 * Получает регистр с заданном номером в списке, либо NULL.
 * @param n Номер регистра.
 * @return Регистр с заданном номером в списке, либо NULL.
 */
EXTERN reg_t* regs_reg(const reg_list_t* list, size_t n);

/**
 * Получает количество регистров.
 * @return Количество регистров.
 */
EXTERN size_t regs_count(const reg_list_t* list);

#endif /* REG_REGS_H */
