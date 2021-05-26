/*
 * smart_home_slave_chip.c
 *
 * Created: 5/22/2021 11:01:35 PM
 *  Author: ahmas
 */ 


#include <avr/io.h>
char SPI_DATA_RECEIVE ;

void SMART_HOME_WITH_SPI_SLAVE()
{
	
	SPI_DATA_RECEIVE = SPI_RECEIVE_DATA();
	if (SPI_DATA_RECEIVE=='1')
	{
		PORTA |= 0X01;
	}

	else if (SPI_DATA_RECEIVE=='2')
	{
		PORTA &= ~0X01;
	}
	else if (SPI_DATA_RECEIVE=='3')
	{
		PORTA |= 0X02;
	}
	else if (SPI_DATA_RECEIVE=='4')
	{
		PORTA &= ~0X02;
	}
	else if (SPI_DATA_RECEIVE=='E')
	{
		PORTA=0X00;
	}
}