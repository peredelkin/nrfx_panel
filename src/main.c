/*
 * main.c
 *
 *  Created on: 23 сент. 2021 г.
 *      Author: Ruslan
 */

#define INLINE_DELAY

#include <stdio.h>
#include <nrfx.h>
#include <lcd44780.h>
#include <delay.h>
#include "nrfx_twim.h"
#include "gpio.h"
#include "nmbs_port.h"
#include "nanomodbus.h"
#include "menu.h"

enum {
	MODBUS_RTU_CUSTOM_FUNC_REG_READ = 0x64,
	MODBUS_RTU_CUSTOM_FUNC_REG_WRITE,
};

nmbs_error nmbs_read_reg(nmbs_t* nmbs, reg_t* reg, void* data_out) {
	nmbs_error error = NMBS_ERROR_NONE;

	reg_id_t id = reg_id(reg);

	error = nmbs_send_raw_pdu(nmbs, MODBUS_RTU_CUSTOM_FUNC_REG_READ, id, sizeof(reg_id_t));

	if(error != NMBS_ERROR_NONE) return error;

	size_t data_size = reg_data_size(reg);

	switch(data_size)

	//error = nmbs_receive_raw_pdu_response();

	return error;
}

nmbs_error nmbs_write_reg(nmbs_t* nmbs, reg_t* reg, void* data_in) {
	nmbs_error error = NMBS_ERROR_NONE;

	//error = nmbs_send_raw_pdu();

	if(error != NMBS_ERROR_NONE) return error;

	//error = nmbs_receive_raw_pdu_response();

	return error;
}


lcd44780_t scr_lcd44780;

//колбек направления шины данных lcd44780
void scr_bus_set_direction(lcd44780_bus_direction_t dir) {
	switch(dir) {
	case LCD44780_BUS_DIRECTION_OUT: gpio_pins_init_output(&scr_lcd44780.scr_port);
		break;
	case LCD44780_BUS_DIRECTION_IN: gpio_pins_init_input(&scr_lcd44780.scr_port);
		break;
	default:
		break;
	}
}

void scr_lcd44780_init() {
	lcd44780_init_t scr_lcd44780_init = {
			.scr_rs = {
					.port = SCR_RS_PIN_PORT,
					.shift = SCR_RS_PIN_SHIFT,
					.mask = SCR_RS_PIN_MASK
			},

			.scr_rw = {
					.port = SCR_RW_PIN_PORT,
					.shift = SCR_RW_PIN_SHIFT,
					.mask = SCR_RW_PIN_MASK
			},

			.scr_e = {
					.port = SCR_E_PIN_PORT,
					.shift = SCR_E_PIN_SHIFT,
					.mask = SCR_E_PIN_MASK
			},

			.scr_port = {
					.port = SCR_DB47_PINS_PORT,
					.shift = SCR_DB47_PINS_SHIFT,
					.mask = SCR_DB47_PINS_MASK
			},

			.data_bus_width = LCD44780_BUS_WIDTH_4BIT,
			.set_bus_direction = &scr_bus_set_direction
	};
	delay_ms(100);
	lcd44780_init(&scr_lcd44780, &scr_lcd44780_init);
	delay_ms(100);
	lcd44780_switch_data_bus_width(&scr_lcd44780, LCD44780_BUS_WIDTH_4BIT);
	delay_ms(100);
	lcd44780_clear(&scr_lcd44780);
	delay_ms(100);
	lcd44780_entry_mode_set(&scr_lcd44780, LCD44780_CURSOR_MOVE_RIGHT, LCD44780_DISPLAY_SHIFT_OFF);
	lcd44780_display_control(&scr_lcd44780, LCD44780_DISPLAY_ON, LCD44780_CURSOR_OFF, LCD44780_CURSOR_BLINK_OFF);
	lcd44780_function_set(&scr_lcd44780, LCD44780_LINE_NUMBER_2, LCD44780_FONT_TYPE_5X8);
}

void dcdc_init() {
	NRF_POWER->DCDCEN = 1;
	NRF_POWER->DCDCEN0 = 1;
}

void UICR_init() {
	if((NRF_UICR->REGOUT0 & UICR_REGOUT0_VOUT_Msk) == UICR_REGOUT0_VOUT_DEFAULT) {
		NRF_NVMC->CONFIG=1;
		NRF_UICR->REGOUT0 = UICR_REGOUT0_VOUT_3V3;
		NRF_NVMC->CONFIG=0;
	}
}

//uart begin
void rs485_set_rx(void) {
	gpio_pins_clr_output(&rs485_dir_pin);
}

void rs485_set_tx(void) {
	gpio_pins_set_output(&rs485_dir_pin);
}

rs485_uarte_t rs485_uart = {
		.uarte = NRFX_UARTE_INSTANCE(0),
		.timer = NRFX_TIMER_INSTANCE(0),
		.rx.done = true,
		.rx.timeout = false,
		.rx.timeout_ch = NRF_TIMER_CC_CHANNEL0,
		.tx.done = true,
		.tx.timeout = false,
		.tx.timeout_ch = NRF_TIMER_CC_CHANNEL1,
		.set_rx = rs485_set_rx,
		.set_tx = rs485_set_tx
};

nrfx_uarte_config_t uarte_config = {
		.pseltxd = ((uint32_t)((11 << 0) | (1 << 5) | (0 << 31))), //P1.11 TXD
		.pselrxd = ((uint32_t)((28 << 0) | (0 << 5) | (0 << 31))), //P0.28 RXD
		.pselcts = NRF_UARTE_PSEL_DISCONNECTED,
		.pselrts = NRF_UARTE_PSEL_DISCONNECTED,
		.p_context = &rs485_uart,
		.hwfc = NRF_UARTE_HWFC_DISABLED,
		.parity = NRF_UARTE_PARITY_EXCLUDED,
		.baudrate = NRF_UARTE_BAUDRATE_9600,
		.interrupt_priority = 2,
};

void uarte_0_init(void) {
	//P1.02 DIR: Output, Connect, Pull down, S0S1, Disabled
	NRF_P1->PIN_CNF[2] = (uint32_t)((1 << 0) | (0 << 1) | (1 << 2) | (0 << 8) | (0 << 16));
	//P1.11 TXD: Output, Connect, Pull up, S0S1, Disabled
	NRF_P1->PIN_CNF[11] = (uint32_t)((1 << 0) | (0 << 1) | (3 << 2) | (0 << 8) | (0 << 16));
	//P0.28 RXD: Input, Connect, Pull up, S0S1, Disabled
	NRF_P0->PIN_CNF[28] = (uint32_t)((0 << 0) | (0 << 1) | (3 << 2) | (0 << 8) | (0 << 16));

	nrfx_uarte_init(&rs485_uart.uarte,&uarte_config, uarte_event_handler);
}
//uart end

//timer begin
nrfx_timer_config_t timer_0_config = {
		.frequency = NRF_TIMER_FREQ_250kHz,
		.mode = NRF_TIMER_MODE_TIMER,
		.bit_width = NRF_TIMER_BIT_WIDTH_32,
		.interrupt_priority = 1,
		.p_context = &rs485_uart
};

void timer_0_init(void) {
	nrfx_timer_init(&(rs485_uart.timer), &timer_0_config, uarte_timeout_handler);
}
//timer end

//nanomodbus begin
nmbs_t nmbs;

nmbs_error nmbs_client_init(nmbs_t* nmbs) {
    nmbs_platform_conf conf;

    nmbs_platform_conf_create(&conf);

    conf.transport = NMBS_TRANSPORT_RTU;
    conf.read = nmbs_read_serial;
    conf.write = nmbs_write_serial;

    nmbs_error status = nmbs_client_create(nmbs, &conf);
    if (status != NMBS_ERROR_NONE) {
        return status;
    }

    nmbs_set_platform_arg(nmbs, &rs485_uart);

    nmbs_set_byte_timeout(nmbs, 100);
    nmbs_set_read_timeout(nmbs, 1000);

    nmbs_set_destination_rtu_address(nmbs, 1);

    return NMBS_ERROR_NONE;
}

void modbus_init(void) {
	uarte_0_init();
	timer_0_init();
	nmbs_client_init(&nmbs);
}
//nanomodbus end

//i2c begin
nrfx_twim_t nrf_twim = NRFX_TWIM_INSTANCE(0);

const nrfx_twim_config_t twim_config = {
		.scl = ((uint32_t)((17 << 0) | (0 << 5) | (0 << 31))), //P0.17 SCL
		.sda = ((uint32_t)((15 << 0) | (0 << 5) | (0 << 31))), //P0.15 SDA
		.frequency = 0x01980000,
		.interrupt_priority = 3,
		.hold_bus_uninit = false
};

void twim_init(void) {
	//P0.17 SCL: Input, Connect, Pull up, S0D1, Disabled
	NRF_P0->PIN_CNF[17] = (uint32_t)((0 << 0) | (0 << 1) | (3 << 2) | (6 << 8) | (0 << 16));
	//P0.15 SDA: Input, Connect, Pull up, S0D1, Disabled
	NRF_P0->PIN_CNF[15] = (uint32_t)((0 << 0) | (0 << 1) | (3 << 2) | (6 << 8) | (0 << 16));

	nrfx_twim_init(&nrf_twim, &twim_config, NULL, NULL);
	nrfx_twim_enable(&nrf_twim);
}
//i2c end

typedef struct {
	uint8_t cmd;
	uint8_t data;
} pca9539_frame_t;

typedef struct {
	pca9539_frame_t out[2];
	pca9539_frame_t inv[2];
	pca9539_frame_t conf[2];
} pca9539_t;

pca9539_t pca9539_frame;

void pca9539_init() {
	nrfx_err_t err_code = NRFX_SUCCESS;

	pca9539_frame.out[0].cmd = 0x02;
	pca9539_frame.out[1].cmd = 0x03;

	pca9539_frame.inv[0].cmd = 0x04;
	pca9539_frame.inv[1].cmd = 0x05;

	pca9539_frame.conf[0].cmd = 0x06;
	pca9539_frame.conf[1].cmd = 0x07;

	pca9539_frame.out[0].data = 0b00000000;
	pca9539_frame.out[1].data = 0b00000001;

	pca9539_frame.inv[0].data = 0b00000000;
	pca9539_frame.inv[1].data = 0b00000000;

	pca9539_frame.conf[0].data = 0b11111111;
	pca9539_frame.conf[1].data = 0b00000000;

	uint8_t step = 0;
	for(int retry = 2; retry > 0;) {

		switch(step) {
		case 0:
			err_code = nrfx_twim_tx(&nrf_twim, 116, (uint8_t*)(&(pca9539_frame.out[0])), 2, false);
			break;
		case 1:
			err_code = nrfx_twim_tx(&nrf_twim, 116, (uint8_t*)(&(pca9539_frame.out[1])), 2, false);
			break;
		case 2:
			err_code = nrfx_twim_tx(&nrf_twim, 116, (uint8_t*)(&(pca9539_frame.inv[0])), 2, false);
			break;
		case 3:
			err_code = nrfx_twim_tx(&nrf_twim, 116, (uint8_t*)(&(pca9539_frame.inv[1])), 2, false);
			break;
		case 4:
			err_code = nrfx_twim_tx(&nrf_twim, 116, (uint8_t*)(&(pca9539_frame.conf[0])), 2, false);
			break;
		case 5:
			err_code = nrfx_twim_tx(&nrf_twim, 116, (uint8_t*)(&(pca9539_frame.conf[1])), 2, false);
			break;
		default:
			return;
		}

		if(err_code == NRFX_SUCCESS) {
			if(step >= 5) {
				retry = 0;
			} else {
				step++;
			}
		} else {
			step = 0;
			retry--;
		}
	}
}

typedef union {
	uint8_t all;
	struct __attribute__((packed)) {
		unsigned Mn: 1;		//P00
		unsigned Pl: 1;		//P01
		unsigned On: 1;		//P02
		unsigned Dn: 1;		//P03
		unsigned Up: 1;		//P04
		unsigned Off: 1;	//P05
		unsigned Esc: 1;	//P06
		unsigned Ent: 1;	//P07
	} bit;
} pca_keys_t;

typedef struct {
	uint8_t cmd;
	pca_keys_t current;
	pca_keys_t old;
	pca_keys_t rise;
	pca_keys_t fall;
} pca_keys_status_t;

pca_keys_status_t pca_keys = {
		.cmd = 0x00
};

typedef union {
	uint8_t all;
	struct __attribute__((packed)) {
		unsigned SCR_LED: 1;	//P10
		unsigned T_mn: 1;		//P11
		unsigned T_pl: 1;		//P12
		unsigned Alr: 1;		//P13
		unsigned Wrn: 1;		//P14
		unsigned En: 1;			//P15
		unsigned ZS: 1;			//P16
		unsigned Lim: 1;		//P17
	} bit;
} pca_leds_t;

typedef struct {
	uint8_t cmd;
	pca_leds_t data;
} pca_leds_status_t;

pca_leds_status_t pca_leds = {
		.cmd = 0x03,
		.data.all = 0x00
};

nrfx_err_t nrfx_pca9539_read(
		nrfx_twim_t* twim,
		uint8_t address,
		uint8_t* command,
		uint8_t* data,
		size_t length) {

	nrfx_err_t err = nrfx_twim_tx(twim, address, command, 1, true);
	if(err == NRFX_SUCCESS) err = nrfx_twim_rx(twim, address, data, length);
	return err;
}

nrfx_err_t nrfx_pca9539_write(
		nrfx_twim_t* twim,
		uint8_t address,
		uint8_t* cmd_data,
		size_t length) {

	nrfx_err_t err = nrfx_twim_tx(twim, address, cmd_data, length + 1, false);
	return err;
}

void SysTick_Handler(void)
{
	for(;;){
		__NOP();
	}
}

//TODO: запихнуть в какую нибудь структуру
char str_0[34];
int str_0_count;
char screen_str_0[16];

char str_1[34];
int str_1_count;
char screen_str_1[16];

//TODO: убрать
extern menu_t panel_menu_0;
extern void menu_panel_init(void);

char menu_str_val[33];
int menu_val_tmp;

void edit_menu_item_value(menu_item_t* item)
{
	menu_value_t* value = menu_item_value(item);

    if(value == NULL) return;

    switch(menu_value_type(value)){
        case MENU_VALUE_TYPE_STRING:
            break;
        case MENU_VALUE_TYPE_INT:
            break;
        case MENU_VALUE_TYPE_BOOL:
            menu_value_set_bool(value, !menu_value_bool(value));
            break;
        case MENU_VALUE_TYPE_FIXED:
            break;
        case MENU_VALUE_TYPE_ENUM:

            if(pca_keys.rise.bit.Pl) {
            	menu_val_tmp = (int) menu_value_enum_current(value) + 1;
            	if (menu_val_tmp > menu_value_enum_count(value)) {
            		menu_val_tmp = menu_value_enum_count(value);
            	}
            	menu_value_enum_set_current(value, menu_val_tmp);
            }

            if(pca_keys.rise.bit.Mn) {
            	menu_val_tmp = (int) menu_value_enum_current(value) - 1;
            	if (menu_val_tmp < 0) {
            		menu_val_tmp = 0;
            	}
            	menu_value_enum_set_current(value, menu_val_tmp);
            }
            break;
        default:
            break;
    }
}

void paint_menu_item_value(menu_item_t* item)
{
	menu_value_t* value = menu_item_value(item);

    if(value == NULL) return;

    switch(menu_value_type(value)){
        case MENU_VALUE_TYPE_STRING:
        	str_1_count = snprintf(str_1, 17, "%s", menu_value_string(value));
            break;
        case MENU_VALUE_TYPE_INT:
        	str_1_count = snprintf(str_1, 17, "%d", (int)menu_value_int(value));
            break;
        case MENU_VALUE_TYPE_BOOL:
        	str_1_count = snprintf(str_1, 17, "%s", menu_value_bool(value) ? "true" : "false");
            break;
        case MENU_VALUE_TYPE_FIXED:
        	str_1_count = snprintf(str_1, 17, "0x%x", (int)menu_value_int(value));
            break;
        case MENU_VALUE_TYPE_ENUM:
            value = menu_value_enum_current_value(value);
            paint_menu_item_value(value);
            break;
        default:
        	str_1_count = snprintf(str_1, 17, "-");
            break;
    }
}

void menu_panel_paint_item(menu_item_t* item) {
	if (menu_item_parent(item) == NULL) {
		str_0_count = snprintf(str_0, 17, "Main menu");
		str_1_count = snprintf(str_1, 17, "%s", menu_item_text(item));
	} else if (menu_item_has_value(item)) {
		str_0_count = snprintf(str_0, 17, "%s", menu_item_text(item));
		edit_menu_item_value(item);
		paint_menu_item_value(item);
	} else {
		str_0_count = snprintf(str_0, 17, "%s", menu_item_text(item->parent));
		str_1_count = snprintf(str_1, 17, "%s", menu_item_text(item));
	}

	memset(screen_str_0, *(" "), sizeof(screen_str_0));
	memset(screen_str_1, *(" "), sizeof(screen_str_1));

	memcpy(screen_str_0, str_0, str_0_count);
	memcpy(screen_str_1, str_1, str_1_count);

	lcd44780_set_ddram(&scr_lcd44780, 0);
	lcd44780_n_puts(&scr_lcd44780, screen_str_0, 16);
	lcd44780_set_ddram(&scr_lcd44780, 40);
	lcd44780_n_puts(&scr_lcd44780, screen_str_1, 16);
}

void menu_panel_process(void) {
    menu_item_t* item = menu_current(&panel_menu_0);

    menu_panel_paint_item(item);

    if(pca_keys.rise.bit.Up) {
    	menu_prev(&panel_menu_0);
    }

    if(pca_keys.rise.bit.Dn) {
    	menu_next(&panel_menu_0);
    }

    if(pca_keys.rise.bit.Ent) {
    	menu_down(&panel_menu_0);
    }

    if(pca_keys.rise.bit.Esc) {
    	menu_up(&panel_menu_0);
    }
}

int main(int argc, char *argv[]) {
	//UICR_init();
	dcdc_init();
	gpio_init();
	gpio_pins_clr_output(&en_33v_pin);
	delay_ms(100);
	gpio_pins_set_output(&en_33v_pin);
	delay_ms(100);
	gpio_pins_clr_output(&pca_rst_pin);
	delay_ms(1);
	gpio_pins_set_output(&pca_rst_pin);
	scr_lcd44780_init();
	twim_init();
	pca9539_init();

	modbus_init();

	menu_panel_init();

	uint16_t addr = 0;
	uint8_t leds[2] = {0};
	uint16_t data[2] = {0};

	while (1) {
		if (nrfx_pca9539_read(&nrf_twim, 116, &pca_keys.cmd, &pca_keys.current.all, 1) == NRFX_SUCCESS) {

			pca_keys.rise.all = ~pca_keys.old.all & pca_keys.current.all;
			pca_keys.fall.all = pca_keys.old.all & ~pca_keys.current.all;
			pca_keys.old.all = pca_keys.current.all;

//			if(nmbs_read_holding_registers(&nmbs, (uint16_t)(6 << 1), 1, (uint16_t*)leds) == NMBS_ERROR_NONE) {
//				pca_leds.data.all = leds[0];
//				nrfx_pca9539_write(&nrf_twim, 116, (uint8_t*) &pca_leds, 1);
//			}

//			if (nmbs_read_holding_registers(&nmbs, (uint16_t)(addr << 1), 2, data) == NMBS_ERROR_NONE) {
//				str_1_count = snprintf(str_1, 16, "Data: %0.2f", (*((int32_t*)data))/32768.0f);
//			} else {
//				str_1_count = snprintf(str_1, 16, "Error %i", nmbs_err);
//			}

			menu_panel_process();

			delay_ms(20);

			if(pca_keys.rise.bit.Up) {
				if(addr == 5) {
					addr = 0;
				} else {
					addr++;
				}
			}

			if(pca_keys.rise.bit.Dn) {
				if(addr == 0) {
					addr = 5;
				} else {
					addr--;
				}
			}
		}
	}
}

//	char str_0[16];
//	char str_1[16];
//
//	snprintf(str_0, 16, "pca init");
//
//	if (err_code == NRFX_SUCCESS) {
//		snprintf(str_1, 16, "pca ok");
//	} else {
//		snprintf(str_1, 16, "pca not ok");
//	}
//
//	lcd44780_clear(&scr_lcd44780);
//	delay_ms(10);
//	lcd44780_set_ddram(&scr_lcd44780, 0);
//	delay_ms(10);
//	lcd44780_puts(&scr_lcd44780, str_0);
//	delay_ms(10);
//	lcd44780_set_ddram(&scr_lcd44780, 40);
//	delay_ms(10);
//	lcd44780_puts(&scr_lcd44780, str_1);
//	delay_ms(100);
