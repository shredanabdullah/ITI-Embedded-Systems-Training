#define F_CPU 1000000UL 
#include <avr/io.h>
#include <avr/delay.h>
//we want to turn on/off a led on PD0 using a switch on pin PA0
void main(void){
	//
	DDRA=0x00;
	DDRD=0x01;
	
	//enable external clk on pin A0
	PORTA=0x01;
	//elpin lw dakhel 3aleha sfr fa kda elswitch mdas 3aleh fa elled elmafreoud tshtaghal
	
	while(1){//super loop to keep checking
	//CHECK IF THE SWITCH IS PUSHED SO THE LED IS OFF
	if(PORTA & 0x01){
		PORTD==0x00;
		_delay_ms(10);//to avoid the debouncing problem
	}
	else{
		PORTD==0x01;
		_delay_ms(10);
	}
		
	}
}
