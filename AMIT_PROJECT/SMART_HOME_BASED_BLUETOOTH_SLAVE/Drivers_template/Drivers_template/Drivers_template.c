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
	DDRA=0xff;
    SPI_INITI_SLAVE();          /**SPI_INITIALZETION**/
	

	while (1)
	
	{
		
		SMART_HOME_WITH_SPI_SLAVE();
		
	}

}