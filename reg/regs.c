#include "regs.h"
#include <stdlib.h>
#include <stddef.h>
#include "reg_list.h"

const reg_list_t reg_list[REG_LIST_SIZE] = {
		{app_regs, APP_REGS_COUNT, APP_REGS_ID},
		{mc_regs, MC_REGS_COUNT , MC_REGS_ID}
};


/**
 * Функция сравнения двух регистров по идентификатору.
 * @param a Параметр А.
 * @param b Параметр Б.
 * @return Результат сравнения.
 */
static int regs_compare_ids(const void * key, const void * item)
{
    const reg_t* reg = (const reg_t*)item;
    reg_id_t item_id = reg->id;
    reg_id_t key_id = (reg_id_t)(unsigned long)key;

    if(key_id > item_id) return 1;
    if(key_id < item_id) return -1;

    return 0;
}

reg_t* regs_find(const reg_list_t* list, reg_id_t id)
{

    if(id == REG_ID_NONE) return NULL;

    reg_t* reg = bsearch((const void*)(unsigned long)id,
                           (const void*)list->regs, list->size, sizeof(reg_t),
                           regs_compare_ids);

    return reg;
}

reg_t* regs_first(const reg_list_t* list)
{
    return (reg_t*)&list->regs[0];
}

reg_t* regs_end(const reg_list_t* list)
{
    return (reg_t*)&list->regs[list->size];
}

reg_t* regs_next(const reg_list_t* list, reg_t* reg)
{
    reg_t* next = &reg[1];
    if(next >= regs_end(list)) return NULL;
    return next;
}

reg_t* regs_reg(const reg_list_t* list, size_t n)
{
    reg_t* reg = (reg_t*)&list->regs[n];
    if(reg >= regs_end(list)) return NULL;
    return reg;
}

size_t regs_count(const reg_list_t* list)
{
    return list->size;
}

