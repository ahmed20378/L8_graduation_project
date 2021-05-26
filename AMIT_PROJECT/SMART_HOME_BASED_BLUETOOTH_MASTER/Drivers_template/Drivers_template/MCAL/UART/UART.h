/*
 * UART.h
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */


#ifndef UART_H_
#define UART_H_

/************************Defines*********************/

#define INTERRUPT					0
#define POLLING						1

#define UART_DATA_clr_msk                   0b11111001
#define UART_DATA_SIZE_5                    0b00000000
#define UART_DATA_SIZE_6                    0b00000010
#define UART_DATA_SIZE_7                    0b00000100
#define UART_DATA_SIZE_8                    0b00000110

#define UART_PARITY_clr_msk                 0b11001111
#define UART_PARITY_MODE_DISABLE            0b00000000
#define UART_PARITY_MODE_EVEN               0b00100000
#define UART_PARITY_MODE_ODD                0b00110000

#define UART_STOP_BIT_clr_msk				0b11110111
#define UART_STOP_BIT_1   					0b00000000
#define UART_STOP_BIT_2   					0b00001000

#define UART_UCSRC_ACCESS_msk				0b10000000

#define UART_UCSRB_RXEN                     0b00010000
#define UART_UCSRB_TXEN                     0b00001000
#define UART_MODE_SELCTE                    0
/*********************Prototypes***************************/
void UART_init();
void USART_TransmitPolling( char DataByte);
void UART_sendMsg(char *Msg,uint8 MsgLength);
char UART_getReceiveMsg() ;
#endif /* UART_H_ */