#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
/*write a code to display on 7-segement numbers
from 0 to 9 with delay 1 second before changing number.*/

int main(void) {
    DDRA = 0xFF;  // Set Pin A0 as output

    while (1) {
        PORTA = 0x7F;  // represent 0
        _delay_ms(1000);  // Delay for 1 second

		PORTA = 0x30;  // represent 1
        _delay_ms(1000);  // Delay for 1 second

		PORTA = 0xDB;  //represent 2
        _delay_ms(1000);  // Delay for 1 second

		PORTA = 0x4F;  // represent 3
		_delay_ms(1000);  // Delay for 1 second

		PORTA = 0x66;  // represent 4
        _delay_ms(1000);  // Delay for 1 second

       PORTA = 0x6D;  // represent 5
        _delay_ms(1000);  // Delay for 1 second

		 PORTA = 0x7D;;  // represent 6
        _delay_ms(1000);  // Delay for 1 second

		 PORTA = 0x47;  // represent 7
        _delay_ms(1000);  // Delay for 1 second

		 PORTA = 0xFF;  // represent 8
        _delay_ms(1000);  // Delay for 1 second

		 PORTA = 0x6F;  // represent 9
        _delay_ms(1000);  // Delay for 1 second
    }
    return 0;
}
