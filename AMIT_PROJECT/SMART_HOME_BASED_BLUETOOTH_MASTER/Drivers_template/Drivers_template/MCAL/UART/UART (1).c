/*
 * UART.c
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */
/****************Includes******************/
#include "../../Utils/Bit_Math.h"
#include "../../Utils/Std_Types.h"
#include <avr/interrupt.h>
#include "../../Config/UART_cfg.h"
#include "UART_hw.h"
#include "UART_types.h"
#include "UART.h"
/*
#define F_CPU     1000000UL
#define USART_BAUDRATE 9600
#define BAUD_PRESCALER  (((F_CPU / (USART_BAUDRATE * 16UL))) - 1)
*/
#define SYNCHRONOUS (0<<UMSEL) // USART Mode Selection

#define DISABLED    (0<<UPM0)
#define EVEN_PARITY (2<<UPM0)
#define ODD_PARITY  (3<<UPM0)
#define PARITY_MODE  DISABLED // USART Parity Bit Selection

#define ONE_BIT (0<<USBS)
#define TWO_BIT (1<<USBS)
#define STOP_BIT ONE_BIT      // USART Stop Bit Selection

#define FIVE_BIT  (0<<UCSZ0)
#define SIX_BIT   (1<<UCSZ0)
#define SEVEN_BIT (2<<UCSZ0)
#define EIGHT_BIT (3<<UCSZ0)
#define DATA_BIT   EIGHT_BIT  // USART Data Bit Selection

void USART_Init()
{
	// Set Baud Rate
	UBRRH = (uint16_t) (UART_BAUDE_RATE_UBRR >> 8);
	UBRRL = (uint16_t) (UART_BAUDE_RATE_UBRR);
	
	// Set Frame Format
	UCSRC |= (1 << URSEL) | (1 << UCSZ0) | (1 << UCSZ1);
	//SYNCHRONOUS | PARITY_MODE | STOP_BIT | DATA_BIT;
	
	// Enable Receiver and Transmitter
	UCSRB = (1<<RXEN) | (1<<TXEN);
}

void USART_TransmitPolling( char DataByte)
{
	while (!( UCSRA & (1<<UDRE))); // Do nothing until UDR is ready
	UDR = DataByte;
}


char USART_ReceivePolling(void)
{
	
	char c;
	while (!( UCSRA & (1<<RXC))); // Do nothing until data have been received
	c=UDR ;
	return c;
	
	
}

void UART_SendString(char *str)
{
	unsigned char j=0;
	
	while (str[j]!=0)		/* Send string till null */
	{
		USART_TransmitPolling(str[j]);
		j++;
	}
}

/*******************Global Variables******************/
static uint8 UART_Tx_Buffer[UART_TX_BUFFER_SIZE],
UART_Rx_Buffer[UART_RX_BUFFER_SIZE],
UART_TX_Index,
UART_Rx_Index,
UART_Msg_TxLength;
static boolean UART_MSG_TxCompleteFlag = true;

/************************Implementations**********************/

/*******************************************************************
* NAME :			void UART_init(void)
* DESCRIPTION :     Initialize the UART
* INPUTS :			void
* OUTPUTS :			void
*/
void UART_init(void)
{
	
	
	// Set Baud Rate
	UBRRH = (uint16_t) (UART_BAUDE_RATE_UBRR >> 8);
	UBRRL = (uint16_t) (UART_BAUDE_RATE_UBRR);
	
	UCSRC |= UART_UCSRC_ACCESS_msk | UART_DATA_SIZE_SELECTOR | UART_PARITY_MODE_SELECTOR | UART_STOP_BIT_SELECTOR ;
	
	/*// Set Frame Format
	UCSRC |= (1 << URSEL) | (1 << UCSZ0) | (1 << UCSZ1);
	//SYNCHRONOUS | PARITY_MODE | STOP_BIT | DATA_BIT;
	*/
	UCSRB |= UART_UCSRB_RXEN | UART_UCSRB_TXEN ;
	/*
	// Enable Receiver and Transmitter
	UCSRB = (1<<RXEN) | (1<<TXEN);
	*/
	/************* Add your code here******************/
	
	#if UART_TYPE == INTERRUPT
	/************* Add your code here******************/
	#endif
	
	/************* Add your code here******************/
	
	
}

/*******************************************************************
* NAME :			STD_RetType UART_sendMsg(const uint8 Msg[],uint8 MsgLength)
* DESCRIPTION :     Send data through uart and returns STD_ok if it is done correctly
*					returns STD_not_ok if it is not done correctly
* INPUTS :			const uint8, uint8
* OUTPUTS :			STD_RetType
*/
void UART_sendMsg(char *Msg,uint8 MsgLength)
{
	//STD_RetType ret = STD_not_ok;/*sets initial value to avoid warinings*/
	
	/************* Add your code here******************/
	unsigned char j=0;
	
	while ((Msg[j]!= 0) && (j < MsgLength))	/* Send string till null */
	{
		//while (!( UCSRA & (1<<UDRE))); // Do nothing until UDR is ready
		//UDR = Msg[j];
			
		USART_TransmitPolling(Msg[j]);
		j++;
		
		//ret = STD_ok;
	}
	
	
	//return ret;	
}

/*******************************************************************
* NAME :			void UART_getReceiveMsg(uint8* MsgPtr, uint8* MsgLengthPtr)
* DESCRIPTION :     Read the data recieved by the uart and save it in the given ptr
* INPUTS :			uint8*, uint8*
* OUTPUTS :			void
*/
/*********************************************
why we used / uint8* MsgPtr, uint8* MsgLengthPtr / when we receive data we dont know msg and length
************************************/
//void UART_getReceiveMsg(uint8* MsgPtr, uint8* MsgLengthPtr) 
/*ok*/

uint8 UART_getReceiveMsg(uint8 MsgPtr, uint8 MsgLengthPtr) 
{
	/************* Add your code here******************/	
	
	while (!( UCSRA & (1<<RXC))); // Do nothing until data have been received
	MsgPtr = UDR ;
	return MsgPtr;
	

}
