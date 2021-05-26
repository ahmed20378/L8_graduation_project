/*
 * SPI.h
 *
 * Created: 5/21/2021 7:39:58 PM
 *  Author: ahmas
 */ 


#ifndef SPI_H_
#define SPI_H_
#include <avr/io.h>			/* Include AVR std. library file */




#define MASTER_OUT_SLAVE_IN  5                       /*MOSI PIN*/
#define MASTER_IN_SLAVE_OUT  6                        /*MISO PIN*/
#define CHIP_SELECT          4                        /*CHIP SELECT PIN*/
#define CLOCK_SELECT         7                         /*CLOCK SELECT PIN*/
#define SS_Enable PORTB &= ~(1<<CHIP_SELECT)			/* Define Slave enable */
#define SS_Disable PORTB |= (1<<CHIP_SELECT)			/* Define Slave disable */


void SPI_INITI_MASTER(); 
void SPI_INITI_SLAVE();
void SPI_SEND_DATA(char data);
void SPI_RECEIVE_DATA();

#endif /* SPI_H_ */