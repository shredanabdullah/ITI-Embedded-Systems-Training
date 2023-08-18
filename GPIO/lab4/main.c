#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
/*Write a C Code that apply Some LED animations.*/

int main(void) {
    DDRA = 0b0001 0101;  // Set Pin A0 as output

    while (1) {
        PORTA = 0x01;  // Turn on LED (set Pin A0 high)
        _delay_ms(1000);  // Delay for 1 second

		PORTA = 0x04;  // Turn on LED (set Pin A1 high)
        _delay_ms(1000);  // Delay for 1 second

		PORTA = 0x10;  // Turn on LED (set Pin A4 high)
        _delay_ms(1000);  // Delay for 1 second

		PORTA = 0x05;  // Turn on LED (set Pin A4 Low, A0,A1 high)
		_delay_ms(1000);  // Delay for 1 second

		PORTA = 0x01;  // Turn on LED (set Pin A1 Low, A0high)
        _delay_ms(1000);  // Delay for 1 second

       PORTA = 0x00;  // Turn on LED (set Pin A0 Low)
        _delay_ms(1000);  // Delay for 1 second
    }
    return 0;
}
