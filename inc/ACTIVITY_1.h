/**
 * @file ACTIVITY_1.h
 * @author 260214(sayani0498@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY_1_H_
#define __ACTIVITY_1_H_
/**
 * Include files
 */ 
#include <avr/io.h>
#include "ACTIVITY_1.h"

//Macro definition 

#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */


#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */
#define SENSOR_ON !(PIND&(1<<PD1)) // Switch1 ON
#define HEAT_ON !(PIND&(1<<PD3)) // Switch2 ON

/**
 * Function Definitions
 */

/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void ledstat(uint8_t state);
void InitLED(void);

#endif /** __LEDSTAT_H_ */
