/*
 ============================================================================
 Name        : application.c
 Author      : shredan abdullah
 Description : Led Animation
 Date        : Oct 4, 2023
 ============================================================================
 */
/*
Write a C code that apply 8 different animations on 8 LED string based on the value of 3 way DIP Switch as following:
DIP value  LED Action
1          Flashing every 500 ms
2          Shifting Left every 250 ms
3          Shifting Right every 250 ms
4          2-LEDs Converging every 300 ms
5          2-LEDs Diverging every 300 ms
6 		   Ping Pong effect every 250 ms
7          Incrementing (Snake effect) every 300 ms
8          2-LEDs Converging/Diverging every 300 ms
*/

#include "gpio.h"
#include "util/delay.h"




int main(void){
	/*Initialize led ports direction and set initial values to zeros*/
	GPIO_setPortDirection(PORTA_ID,PORT_OUTPUT);
	GPIO_writePort(PORTA_ID,LOGIC_LOW);

	/*Initialize switch direction*/
	GPIO_setPinDirection(PORTC_ID,PIN0_ID,PIN_INPUT );
	GPIO_setPinDirection(PORTC_ID,PIN1_ID,PIN_INPUT );
	GPIO_setPinDirection(PORTC_ID,PIN2_ID,PIN_INPUT );

	uint8 DIP_SWITCH_VALUE= 4*GPIO_readPin(PORTC_ID ,PIN2_ID)+ 2*GPIO_readPin(PORTC_ID ,PIN1_ID)+ 1*GPIO_readPin(PORTC_ID ,PIN0_ID);

	/*super loop*/
	while(1){
		uint8 DIP_SWITCH_VALUE= 4*GPIO_readPin(PORTC_ID ,PIN2_ID)+ 2*GPIO_readPin(PORTC_ID ,PIN1_ID)+ 1*GPIO_readPin(PORTC_ID ,PIN0_ID);
		_delay_ms(5);
		switch (DIP_SWITCH_VALUE) {
		    case 0:
		    	/*Flashing every 500 ms*/
		    	GPIO_writePort(PORTA_ID, 0xFF);
		    	_delay_ms(500);
		    	GPIO_writePort(PORTA_ID, LOGIC_LOW);
		    	_delay_ms(500);
		        break;
		    case 1:
		    	/*Shifting Left every 250 ms*/
		    	GPIO_writePin(PORTA_ID,PIN0_ID,LOGIC_HIGH);
		    	_delay_ms(500);
		    	GPIO_writePin(PORTA_ID,PIN1_ID,LOGIC_HIGH);
		    	_delay_ms(500);
		    	GPIO_writePin(PORTA_ID,PIN2_ID,LOGIC_HIGH);
		    	_delay_ms(500);
		    	GPIO_writePin(PORTA_ID,PIN3_ID,LOGIC_HIGH);
		    	_delay_ms(500);
		    	GPIO_writePin(PORTA_ID,PIN4_ID,LOGIC_HIGH);
		    	_delay_ms(500);
		    	GPIO_writePin(PORTA_ID,PIN5_ID,LOGIC_HIGH);
		    	_delay_ms(500);
		    	GPIO_writePin(PORTA_ID,PIN6_ID,LOGIC_HIGH);
		    	_delay_ms(500);
		    	GPIO_writePin(PORTA_ID,PIN7_ID,LOGIC_HIGH);
		    	_delay_ms(500);
		    	GPIO_writePort(PORTA_ID, LOGIC_LOW);
		    	_delay_ms(500);
		        break;
		    case 2:
		    	/*Shifting Right every 250 ms*/
		    	GPIO_writePin(PORTA_ID,PIN7_ID,LOGIC_HIGH);
		    	_delay_ms(500);
		    	GPIO_writePin(PORTA_ID,PIN6_ID,LOGIC_HIGH);
		    	_delay_ms(500);
		    	GPIO_writePin(PORTA_ID,PIN5_ID,LOGIC_HIGH);
		    	_delay_ms(500);
     	    	GPIO_writePin(PORTA_ID,PIN4_ID,LOGIC_HIGH);
		    	_delay_ms(500);
		    	GPIO_writePin(PORTA_ID,PIN3_ID,LOGIC_HIGH);
		    	_delay_ms(500);
		    	GPIO_writePin(PORTA_ID,PIN2_ID,LOGIC_HIGH);
		    	_delay_ms(500);
		    	GPIO_writePin(PORTA_ID,PIN1_ID,LOGIC_HIGH);
		    	_delay_ms(500);
		    	GPIO_writePin(PORTA_ID,PIN0_ID,LOGIC_HIGH);
		    	_delay_ms(500);
		    	GPIO_writePort(PORTA_ID, LOGIC_LOW);
		    	_delay_ms(500);
		       break;
		    case 3:
		    	/*2-LEDs Converging every 300 ms*/
		    	GPIO_writePin(PORTA_ID,PIN7_ID,LOGIC_HIGH);
		    	GPIO_writePin(PORTA_ID,PIN0_ID,LOGIC_HIGH);
		    	_delay_ms(500);

		    	GPIO_writePin(PORTA_ID,PIN6_ID,LOGIC_HIGH);
		    	GPIO_writePin(PORTA_ID,PIN1_ID,LOGIC_HIGH);
		    	_delay_ms(500);

		    	GPIO_writePin(PORTA_ID,PIN5_ID,LOGIC_HIGH);
		    	GPIO_writePin(PORTA_ID,PIN2_ID,LOGIC_HIGH);
		    	_delay_ms(500);

		    	GPIO_writePin(PORTA_ID,PIN4_ID,LOGIC_HIGH);
		    	GPIO_writePin(PORTA_ID,PIN3_ID,LOGIC_HIGH);
		    	_delay_ms(500);

		    	GPIO_writePort(PORTA_ID, LOGIC_LOW);
		    	_delay_ms(500);
		       break;
		    case 4:
		    	/*2-LEDs Diverging every 300 ms*/
		    	GPIO_writePin(PORTA_ID,PIN3_ID,LOGIC_HIGH);
		    	GPIO_writePin(PORTA_ID,PIN4_ID,LOGIC_HIGH);
		    	_delay_ms(500);

		    	GPIO_writePin(PORTA_ID,PIN2_ID,LOGIC_HIGH);
		    	GPIO_writePin(PORTA_ID,PIN5_ID,LOGIC_HIGH);
		    	_delay_ms(500);

		    	GPIO_writePin(PORTA_ID,PIN1_ID,LOGIC_HIGH);
		    	GPIO_writePin(PORTA_ID,PIN6_ID,LOGIC_HIGH);
		    	_delay_ms(500);

		    	GPIO_writePin(PORTA_ID,PIN0_ID,LOGIC_HIGH);
		    	GPIO_writePin(PORTA_ID,PIN7_ID,LOGIC_HIGH);
		    	_delay_ms(500);
		    	GPIO_writePort(PORTA_ID, LOGIC_LOW);
		    	_delay_ms(500);
		       break;
		    case 5:
		        /*Ping Pong effect every 250 ms*/
		       break;
		    case 6:
		    	/*Incrementing (Snake effect) every 300 ms*/

		       break;
		    case 7:
		    	/*2-LEDs Converging/Diverging every 300 ms*/

		    	/*2-LEDs Converging every 300 ms*/
		    	GPIO_writePin(PORTA_ID,PIN7_ID,LOGIC_HIGH);
		    	GPIO_writePin(PORTA_ID,PIN0_ID,LOGIC_HIGH);
		    	_delay_ms(500);

		    	GPIO_writePin(PORTA_ID,PIN6_ID,LOGIC_HIGH);
		    	GPIO_writePin(PORTA_ID,PIN1_ID,LOGIC_HIGH);
		    	_delay_ms(500);

		    	GPIO_writePin(PORTA_ID,PIN5_ID,LOGIC_HIGH);
		    	GPIO_writePin(PORTA_ID,PIN2_ID,LOGIC_HIGH);
		    	_delay_ms(500);

		    	GPIO_writePin(PORTA_ID,PIN4_ID,LOGIC_HIGH);
		    	GPIO_writePin(PORTA_ID,PIN3_ID,LOGIC_HIGH);
		    	_delay_ms(500);

		    	GPIO_writePort(PORTA_ID, LOGIC_LOW);
		    	_delay_ms(500);

		    	/*2-LEDs Diverging every 300 ms*/
		    	GPIO_writePin(PORTA_ID,PIN3_ID,LOGIC_HIGH);
		        GPIO_writePin(PORTA_ID,PIN4_ID,LOGIC_HIGH);
		    	_delay_ms(500);

		    	GPIO_writePin(PORTA_ID,PIN2_ID,LOGIC_HIGH);
		    	GPIO_writePin(PORTA_ID,PIN5_ID,LOGIC_HIGH);
		    	_delay_ms(500);

		    	GPIO_writePin(PORTA_ID,PIN1_ID,LOGIC_HIGH);
		    	GPIO_writePin(PORTA_ID,PIN6_ID,LOGIC_HIGH);
		    	_delay_ms(500);

		    	GPIO_writePin(PORTA_ID,PIN0_ID,LOGIC_HIGH);
		    	GPIO_writePin(PORTA_ID,PIN7_ID,LOGIC_HIGH);
		    	_delay_ms(500);

		    	GPIO_writePort(PORTA_ID, LOGIC_LOW);
		    	_delay_ms(500);
		       break;
	  }
	}
	return 0;
}
