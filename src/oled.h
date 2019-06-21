/*
 * oled.h
 *
 *  Created on: 2019Äê6ÔÂ17ÈÕ
 *      Author: zhanlei
 */

#ifndef OLED_H_
#define OLED_H_
#include <stdint.h>
#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"

extern int oled_init(void);
extern int oled_clear(uint8_t mode);

#endif /* OLED_H_ */
