/*
 * smart_home_master_chip.c
 *
 * Created: 5/22/2021 11:00:56 PM
 *  Author: ahmas
 */ 
#include <avr/io.h>
void SMART_HOME_WITH_SPI_MASTER()
{ 
			char UART_DATA_RECEIVE ;
			UART_DATA_RECEIVE = UART_getReceiveMsg();
			if (UART_DATA_RECEIVE != 0)
			{
				PORTC =0;
				SPI_SEND_DATA(UART_DATA_RECEIVE);
			}
}