/*
 * gpio.c
 *
 *  Created on: 24 сент. 2021 г.
 *      Author: Ruslan
 */


#include "gpio.h"

uint32_t gpio_out_read(NRF_GPIO_Type* GPIO) {
	return GPIO->OUT;
}

void gpio_out_write(NRF_GPIO_Type* GPIO,uint32_t data) {
	GPIO->OUT = data;
}

void gpio_out_set(NRF_GPIO_Type* GPIO,uint32_t data) {
	GPIO->OUTSET = data;
}

void gpio_out_clr(NRF_GPIO_Type* GPIO,uint32_t data) {
	GPIO->OUTCLR = data;
}

uint32_t gpio_in_read(NRF_GPIO_Type* GPIO) {
	return GPIO->IN;
}

uint32_t gpio_dir_read(NRF_GPIO_Type* GPIO) {
	return GPIO->DIR;
}

void gpio_dir_write(NRF_GPIO_Type* GPIO,uint32_t data) {
	GPIO->DIR = data;
}

void gpio_dir_set(NRF_GPIO_Type* GPIO,uint32_t data) {
	GPIO->DIRSET = data;
}

void gpio_dir_clr(NRF_GPIO_Type* GPIO,uint32_t data) {
	GPIO->DIRCLR = data;
}

uint32_t gpio_latch_read(NRF_GPIO_Type* GPIO) {
	return GPIO->LATCH;
}

void gpio_latch_clr(NRF_GPIO_Type* GPIO,uint32_t data) {
	GPIO->LATCH = data;
}

uint32_t gpio_detect_read(NRF_GPIO_Type* GPIO) {
	return GPIO->DETECTMODE;
}

void gpio_detect_write(NRF_GPIO_Type* GPIO,uint32_t data) {
	GPIO->DETECTMODE = data;
}

//=========================================

void gpio_pins_init_output(const gpio_t* pins) {
	gpio_dir_set(pins->port, pins->mask);
}

void gpio_pins_init_input(const gpio_t* pins) {
	gpio_dir_clr(pins->port, pins->mask);
}

uint32_t gpio_pins_read_input(const gpio_t* pins) {
	return (gpio_in_read(pins->port) & pins->mask);
}

uint32_t gpio_pins_read_input_offset(const gpio_t* pins) {
	return (gpio_pins_read_input(pins) >> pins->shift);
}

uint32_t gpio_pins_read_output(const gpio_t* pins) {
	return (gpio_out_read(pins->port) & pins->mask);
}

uint32_t gpio_pins_read_output_offset(const gpio_t* pins) {
	return (gpio_pins_read_output(pins) >> pins->shift);
}

void gpio_pins_set_output(const gpio_t* pins) {
	gpio_out_set(pins->port, pins->mask);
}

void gpio_pins_clr_output(const gpio_t* pins) {
	gpio_out_clr(pins->port, pins->mask);
}

void gpio_pins_wite_output(const gpio_t* pins, uint32_t data) {
	gpio_out_set(pins->port, pins->mask & data);
	gpio_out_clr(pins->port, pins->mask & ~data);
}

void gpio_pins_write_output_offset(const gpio_t* pins, uint32_t data) {
	gpio_pins_wite_output(pins, data << pins->shift);
}

//=========================================

void gpio_en_33v_pin_init() {
	gpio_pins_init_output(&en_33v_pin);
}

void gpio_led_shift_pin_init() {
	gpio_pins_init_output(&led_shift_pin);
}

void gpio_key_shift_pin_init() {
	gpio_pins_init_input(&key_shift_pin);
	KEY_SHIFT_PIN_PORT->PIN_CNF[KEY_SHIFT_PIN_N] &= ~(1<<1);
}

void gpio_pca_rst_pin_init() {
	gpio_pins_init_output(&pca_rst_pin);
	PCA_RST_PIN_PORT->PIN_CNF[PCA_RST_PIN_N] = ((uint32_t)((1 << 0) | (0 << 1) | (3 << 2) | (6 << 8))); //Output, Connect, PullUp, S0D1
}

void gpio_init() {
	gpio_en_33v_pin_init();
	gpio_led_shift_pin_init();
	gpio_key_shift_pin_init();
	gpio_pca_rst_pin_init();
}

