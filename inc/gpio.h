/*
 * gpio.h
 *
 *  Created on: 24 сент. 2021 г.
 *      Author: Ruslan
 */

#ifndef GPIO_H_
#define GPIO_H_

#include <nrfx.h>
#include <assert.h>

#define GPIO_PIN_CNF_T_SIZE 4

#pragma pack(push, 1)
typedef struct {
	uint32_t DIR: 1;
	uint32_t INPUT: 1;
	uint32_t PULL: 2;
	uint32_t : 4;
	uint32_t DRIVE : 3;
	uint32_t : 5;
	uint32_t SENSE : 2;
	uint32_t : 14;
} gpio_pin_cnf_t;
#pragma pack(pop)

static_assert(sizeof(gpio_pin_cnf_t) == GPIO_PIN_CNF_T_SIZE, "gpio_pin_cnf_t size error");

typedef struct {
	NRF_GPIO_Type* port;
	uint32_t shift;
	uint32_t mask;
} gpio_t;

//===========================================

extern void gpio_pins_init_output(const gpio_t* pins);

extern void gpio_pins_init_input(const gpio_t* pins);

extern uint32_t gpio_pins_read_input(const gpio_t* pins);

extern uint32_t gpio_pins_read_input_offset(const gpio_t* pins);

extern uint32_t gpio_pins_read_output(const gpio_t* pins);

extern uint32_t gpio_pins_read_output_offset(const gpio_t* pins);

extern void gpio_pins_set_output(const gpio_t* pins);

extern void gpio_pins_clr_output(const gpio_t* pins);

extern void gpio_pins_wite_output(const gpio_t* pins, uint32_t data);

extern void gpio_pins_write_output_offset(const gpio_t* pins, uint32_t data);

//============================================

//Дисплей
#define SCR_DB47_PINS_PORT NRF_P0
#define SCR_DB47_PINS_SHIFT 4
#define SCR_DB47_PINS_MASK (uint32_t)(0b1111<<SCR_DB47_PINS_SHIFT)

#define SCR_RS_PIN_PORT NRF_P0
#define SCR_RS_PIN_SHIFT 8
#define SCR_RS_PIN_MASK (uint32_t)(0b1<<SCR_RS_PIN_SHIFT)

#define SCR_E_PIN_PORT NRF_P0
#define SCR_E_PIN_SHIFT 12
#define SCR_E_PIN_MASK (uint32_t)(0b1<<SCR_E_PIN_SHIFT)

#define SCR_RW_PIN_PORT NRF_P1
#define SCR_RW_PIN_SHIFT 9
#define SCR_RW_PIN_MASK (uint32_t)(0b1<<SCR_RW_PIN_SHIFT)

//Вкл 3.3в
#define EN_33V_PIN_PORT NRF_P1
#define EN_33V_PIN_N 4
#define EN_33V_PIN_MASK (uint32_t)(0b1<<EN_33V_PIN_N)

//Светодиод SHIFT
#define LED_SHIFT_PIN_PORT NRF_P1
#define LED_SHIFT_PIN_N 6
#define LED_SHIFT_PIN_MASK (uint32_t)(0b1<<LED_SHIFT_PIN_N)

//Кнопка SHIFT
#define KEY_SHIFT_PIN_PORT NRF_P0
#define KEY_SHIFT_PIN_N 26
#define KEY_SHIFT_PIN_MASK (uint32_t)(0b1<<KEY_SHIFT_PIN_N)

//Сброс PCA9539PW
#define PCA_RST_PIN_PORT NRF_P0
#define PCA_RST_PIN_N 31
#define PCA_RST_PIN_MASK (uint32_t)(0b1<<PCA_RST_PIN_N)

//Направление RS485
#define RS485_DIR_PIN_PORT NRF_P1
#define RS485_DIR_PIN_N 2
#define RS485_DIR_PIN_MASK (uint32_t)(0b1<<RS485_DIR_PIN_N)

//============================================

//Вкл 3.3в
static const gpio_t en_33v_pin = {
		.port = EN_33V_PIN_PORT,
		.shift = EN_33V_PIN_N,
		.mask = EN_33V_PIN_MASK
};

//Светодиод SHIFT
static const gpio_t led_shift_pin = {
		.port = LED_SHIFT_PIN_PORT,
		.shift = LED_SHIFT_PIN_N,
		.mask = LED_SHIFT_PIN_MASK
};

//Кнопка SHIFT
static const gpio_t key_shift_pin = {
		.port = KEY_SHIFT_PIN_PORT,
		.shift = KEY_SHIFT_PIN_N,
		.mask = KEY_SHIFT_PIN_MASK
};

//Сброс PCA9539PW
static const gpio_t pca_rst_pin = {
		.port = PCA_RST_PIN_PORT,
		.shift = PCA_RST_PIN_N,
		.mask = PCA_RST_PIN_MASK
};

//Направление RS485
static const gpio_t rs485_dir_pin = {
		.port = RS485_DIR_PIN_PORT,
		.shift = RS485_DIR_PIN_N,
		.mask = RS485_DIR_PIN_MASK
};

extern void gpio_init();

#endif /* GPIO_H_ */
