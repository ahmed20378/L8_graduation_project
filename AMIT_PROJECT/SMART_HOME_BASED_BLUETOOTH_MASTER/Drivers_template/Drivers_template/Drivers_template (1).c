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
	
	unsigned char  SPI_DATA_RECEIVE = 0;
	
	while (1)
	
	{
		
		SPI_DATA_RECEIVE = SPI_RECEIVE_DATA();
		if (SPI_DATA_RECEIVE=='1')
		{
			PORTA=0X01;
		}
		
		else if (SPI_DATA_RECEIVE=='2')
		{
			PORTA=0X02;
		}
		else
		{
			PORTA=0X00;             /** error **/
		}

    }

}
