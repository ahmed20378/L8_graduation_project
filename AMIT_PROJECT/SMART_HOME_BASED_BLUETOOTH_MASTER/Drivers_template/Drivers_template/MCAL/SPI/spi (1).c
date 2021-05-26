/*
 * SPI.c
 *
 * Created: 5/21/2021 7:39:40 PM
 *  Author: ahmas
 */ 

#include "SPI.h"

/************************ SPI FUNCTON********************/

void SPI_INITI_MASTER()
{
	
	DDRB |= (1<<MASTER_OUT_SLAVE_IN)|(1<<CLOCK_SELECT)|(1<<CHIP_SELECT);	/* Make MOSI, SCK, SS as Output pin */
	DDRB &= ~(1<<MASTER_IN_SLAVE_OUT);			/* Make MISO pin as input pin */
	PORTB |= (1<<CHIP_SELECT);			/* Make high on SS pin */
	SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR0);	/* Enable SPI in master mode with Fosc/16 */
	SPSR &= ~(1<<SPI2X);			/* Disable speed doubler */

}
void SPI_INITI_SLAVE()
{
	
	DDRB &= ~((1<<MASTER_OUT_SLAVE_IN)|(1<<CLOCK_SELECT)|(1<<CHIP_SELECT));  /* Make MOSI, SCK, SS as input pins */
	DDRB |= (1<<MASTER_IN_SLAVE_OUT);			/* Make MISO pin as output pin */
	SPCR = (1<<SPE);			/* Enable SPI in slave mode */

}
void SPI_SEND_DATA(char data)
{
	char flush_buffer;
	SPDR = data;			/* Write data to SPI data register */
	while(!(SPSR & (1<<SPIF)));	/* Wait till transmission complete */
	flush_buffer = SPDR;		/* Flush received data */
	/* Note: SPIF flag is cleared by first reading SPSR (with SPIF set) and then accessing SPDR hence flush buffer used here to access SPDR after SPSR read */

}
void SPI_RECEIVE_DATA()
{

		SPDR = 0xFF;
		while(!(SPSR & (1<<SPIF)));	/* Wait till reception complete */
		return(SPDR);			/* Return received data */

}