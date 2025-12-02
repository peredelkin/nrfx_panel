/*
 * nmbs_reg.h
 *
 *  Created on: 2 дек. 2025 г.
 *      Author: ruslan
 */

#ifndef INC_NMBS_REG_H_
#define INC_NMBS_REG_H_

#include "regs.h"
#include "nanomodbus.h"
#include "errors/errors.h"

extern err_t nmbs_read_reg(nmbs_t* nmbs, const reg_list_t* list, reg_t* reg);
extern err_t nmbs_write_reg(nmbs_t* nmbs, const reg_list_t* list, reg_t* reg);

#endif /* INC_NMBS_REG_H_ */
