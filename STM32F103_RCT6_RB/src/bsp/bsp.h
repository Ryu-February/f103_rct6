/*
 * bsp.h
 *
 *  Created on: May 25, 2025
 *      Author: fbcks
 */

#ifndef SRC_BSP_BSP_H_
#define SRC_BSP_BSP_H_

#include "def.h"

#include "stm32f1xx_hal.h"

void bsp_init(void);


uint32_t millis(void);
void delay_ms(uint32_t ms);
void Error_Handler(void);

#endif /* SRC_BSP_BSP_H_ */
