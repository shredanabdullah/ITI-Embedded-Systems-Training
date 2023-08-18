#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
/*Write a C code to turn on LED on Pin A0 for 1 second and then turn it off.*/

int main(void) {
    DDRA = 0x01;  // Set Pin A0 as output

    while (1) {
        PORTA = 0x01;  // Turn on LED (set Pin A0 high)
        _delay_ms(1000);  // Delay for 1 second

        PORTA = 0x00;  // Turn off LED (set Pin A0 low)
        _delay_ms(1000);  // Delay for 1 second
    }

    return 0;
}
