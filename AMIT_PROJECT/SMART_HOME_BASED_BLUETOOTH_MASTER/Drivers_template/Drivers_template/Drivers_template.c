/*
 * Drivers_template.c
 *
 * Created: 10/11/2019 6:14:12 AM
 *  Author: dell
 */ 
#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

int main()
{ 
	DDRC=0xff;
	UART_init();                   /**UART_INITIALZETION**/   
	PORTC=0X01;                   /**UART_FLAG_LED_UART_ENABLE**/
	SPI_INITI_MASTER();          /**SPI_INITIALZETION**/
	
	while (1)
	
	{
		/********* SMART HOME FUNCTION ***/
	SMART_HOME_WITH_SPI_MASTER(); 
   
    }

}
