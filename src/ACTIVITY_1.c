/**
 * @file ACTIVITY_1.c
 * @author 260214(sayani0498@gmail.com)
 * @brief Activity_1
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "ACTIVITY_1.h"
#include <avr/io.h>

/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void ledstat(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}
void InitLED(void)
{
	DDRB|=(1<<PB0);
    DDRD&=~(1<<PD0);
    PORTD|=(1<<PD1);
    PORTD|=(1<<PD3);
}