/*
 * UART_hw.h
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */


#ifndef UART_HW_H_
#define UART_HW_H_

/*******************Defines********************/
#define U_D_R					*((volatile uint8*)0x2C)
#define UCSRA				*((volatile uint8*)0x2B)
#define UCSRB				*((volatile uint8*)0x2A)
#define UCSRC				*((volatile uint8*)0x40)
#define UBRRH				*((volatile uint8*)0x40)
#define UBRRL				*((volatile uint8*)0x29)



#endif /* UART_HW_H_ */