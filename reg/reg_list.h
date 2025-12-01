#ifndef REG_LIST_H
#define REG_LIST_H

#include "reg.h"
#include "app/app_reg_ids.h"
#include "mc/mc_reg_ids.h"


/*
 * Начало массива регистров с именем NAME.
 * Для обеспечения поиска регистра по идентификатору,
 * регистры в массиве должны находиться в порядке
 * возрастания значения идентификатора.
 */
#define REGS_BEGIN(NAME) static const reg_t NAME[] = {
/*
 * Элемент массива регистров.
 * ID - идентификатор регистра.
 * DATA - Переменная с данными (берётся указатель).
 * TYPE - Тип данных.
 * //DEF - Значение по-умолчанию.
 * //FLG - Флаги.
 */
#define REG(ID, DATA, TYPE, FLAG, BASE) {ID, (void*)DATA, TYPE, FLAG},
/*
 * Окончание массива регистров.
 */
#define REGS_END() };

/*
 * Значение количества регистров в массиве с именем NAME.
 */
#define REGS_COUNT_VALUE(NAME) (sizeof(NAME)/sizeof(NAME[0]))


#define APP_REG_ARRAY_NAME app_regs
#define MC_REG_ARRAY_NAME mc_regs
#include "app/app_reg_list_data.h"
#include "mc/mc_reg_list_data.h"
#define APP_REGS_COUNT REGS_COUNT_VALUE(APP_REG_ARRAY_NAME)
#define MC_REGS_COUNT REGS_COUNT_VALUE(MC_REG_ARRAY_NAME)
#define APP_REGS_ID 2
#define MC_REGS_ID 1


#endif /* REG_LIST_H */
