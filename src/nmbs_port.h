/*
 * nmbs_port.h
 *
 *  Created on: 29 янв. 2025 г.
 *      Author: ruslan
 */

#ifndef SRC_NMBS_PORT_H_
#define SRC_NMBS_PORT_H_

#include "nrfx_uarte.h"
#include "nrfx_timer.h"

typedef struct {
	volatile bool done;
	volatile bool timeout;
	nrf_timer_cc_channel_t timeout_ch;
	size_t count;
} uarte_rxtx_t;

typedef struct {
	nrfx_uarte_t uarte;
	nrfx_timer_t timer;
	uarte_rxtx_t rx;
	uarte_rxtx_t tx;
	void (*set_rx)(void);
	void (*set_tx)(void);
} rs485_uarte_t;

//колбеки
extern void uarte_event_handler(nrfx_uarte_event_t const* p_event, void* p_context);
extern void uarte_timeout_handler(nrf_timer_event_t event_type, void *p_context);
extern int32_t nmbs_read_serial(uint8_t* buf, uint16_t count, int32_t byte_timeout_ms, void* arg);
extern int32_t nmbs_write_serial(const uint8_t* buf, uint16_t count, int32_t byte_timeout_ms, void* arg);

#endif /* SRC_NMBS_PORT_H_ */
