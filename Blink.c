#define F_CPU 1000000UL 
#include <avr/io.h>
#include <avr/delay.h>

void main(void){
	//output high on pc0
	DDRC=0X01;
	while(1){//super loop 
		PORTC=0x01;
		_delay_ms(1000);
		PORTC=0x00;
		_delay_ms(1000);
	}
}
