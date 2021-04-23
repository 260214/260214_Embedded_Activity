/*
 */

#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
    // Direction of ports
    DDRB|=(1<<PB0);
    DDRD&=~(1<<PD1);
    DDRD&=~(1<<PD3);

    // PULL-UP +5V for push-buttons
    PORTD|=(1<<PD1);
    PORTD |=(1<<PD3);

    while(1)
    {
        if(!(PIND&(1<<PD1)) && !(PIND&(1<<PD3)))
        {
        PORTB|=(1<<PB0);
        _delay_ms(500);
        }
        else
        {
            PORTB&=~(1<<PB0);
            _delay_ms(500);
        }
    }

    return 0;
}

