/**
 * @file SeatHeatingApp.c
 * @author 260214(sayani0498@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include"config.h"
#include"ledstat.h"
#include"ReadADC.h"
#include<avr/io.h>
/**
 * @brief 
 * 
 */

void peripheral_init(void)
{
    // Direction of ports
    DDRB|=(1<<PB0);
    DDRD&=~(1<<PD1);
    DDRD&=~(1<<PD3);

    // PULL-UP +5V for push-buttons
    PORTD|=(1<<PD1);
    PORTD |=(1<<PD3);
    InitADC();
}

int main(void)
{
    uint16_t temp;
    peripheral_init();


    while(1)
    {
        if(!(PIND&(1<<PD1)))
        {
            if(!(PIND&(1<<PD3)))
            {

                ledstat(LED_ON);
                temp=ReadADC(0);
            }

        }
        else
        {
             ledstat(LED_OFF);
        }
    }

    return 0;
}

