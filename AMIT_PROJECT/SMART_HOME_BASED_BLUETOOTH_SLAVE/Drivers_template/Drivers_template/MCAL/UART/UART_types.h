/*
 * UART_types.h
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */


#ifndef UART_TYPES_H_
#define UART_TYPES_H_

/*******************Data Types*********************/
typedef enum
{
	UART_Int_RxComplete,
	UART_Int_TxComplete,
	UART_Int_UdrReady,
}UART_IntType;



#endif /* UART_TYPES_H_ */