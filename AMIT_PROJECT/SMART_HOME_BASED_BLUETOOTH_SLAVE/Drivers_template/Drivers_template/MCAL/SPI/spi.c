/*
 * SPI.c
 *
 * Created: 5/21/2021 7:39:40 PM
 *  Author: ahmas
 */ 

#include "SPI.h"

/************************ SPI FUNCTON********************/

/*******************************************************************
* NAME :			void SPI_INITI_MASTER()
* DESCRIPTION :     Initialize the SPI MASTER
* INPUTS :			void
* OUTPUTS :			void
*/
void SPI_INITI_MASTER()
{
	
	DDRB |= (1<<MASTER_OUT_SLAVE_IN)|(1<<CLOCK_SELECT)|(1<<CHIP_SELECT);	/* Make MOSI, SCK, SS as Output pin */
	DDRB &= ~(1<<MASTER_IN_SLAVE_OUT);			/* Make MISO pin as input pin */
	PORTB |= (1<<CHIP_SELECT);			/* Make high on SS pin */
	SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR0);	/* Enable SPI in master mode with Fosc/16 */
	SPSR &= ~(1<<SPI2X);			/* Disable speed doubler */SS_Enable;
	SS_Enable;
	

}
/*******************************************************************
* NAME :			void SPI_INITI_SLAVE()
* DESCRIPTION :     Initialize the SPI SLAVE
* INPUTS :			void
* OUTPUTS :			void
*/
void SPI_INITI_SLAVE()
{
	
	DDRB &= ~((1<<MASTER_OUT_SLAVE_IN)|(1<<CLOCK_SELECT)|(1<<CHIP_SELECT));  /* Make MOSI, SCK, SS as input pins */
	DDRB |= (1<<MASTER_IN_SLAVE_OUT);			/* Make MISO pin as output pin */
	SPCR = (1<<SPE);			/* Enable SPI in slave mode */

}
/*******************************************************************
* NAME :			void SPI_SEND_DATA(char data)
* DESCRIPTION :     SEND DATA VIA SPI
* INPUTS :			char
* OUTPUTS :			void
*/
void SPI_SEND_DATA(char data)
{
	char flush_buffer;
	SPDR = data;			/* Write data to SPI data register */
	while(!(SPSR & (1<<SPIF)));	/* Wait till transmission complete */
	flush_buffer = SPDR;		/* Flush received data */
	/* Note: SPIF flag is cleared by first reading SPSR (with SPIF set) and then accessing SPDR hence flush buffer used here to access SPDR after SPSR read */

}
/*******************************************************************
* NAME :			void SPI_RECEIVE_DATA()
* DESCRIPTION :     RECIEVE DATA VIA SPI
* INPUTS :			void
* OUTPUTS :			void
*/
void SPI_RECEIVE_DATA()
{

		//SPDR = 0xFF;
		while(!(SPSR & (1<<SPIF)));	/* Wait till reception complete */
		return(SPDR);			/* Return received data */

}