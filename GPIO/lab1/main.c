#define F_CPU 1000000UL
#include <avr/io.h>
//#include <avr/delay.h>
//Write a C code to turn on LED on Pin A0
void main(void){

	DDRA=0x01;
	while(1){//super loop to keep checking

	PORTA=0x01;

	}
}
