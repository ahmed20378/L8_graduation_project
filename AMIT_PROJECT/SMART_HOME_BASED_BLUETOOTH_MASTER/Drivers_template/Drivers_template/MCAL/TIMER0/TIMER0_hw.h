/*
 * TIMER0_hw.h
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */



#ifndef TIMER0_HW_H_
#define TIMER0_HW_H_

/******************Defines*********************/

#define TCNT0		(*(volatile uint8*)0x52)
#define TCCR0		(*(volatile uint8*)0x53)
#define OCR0		(*(volatile uint8*)0x5C)
#define TIMSK		(*(volatile uint8*)0x59)
#define TIFR		(*(volatile uint8*)0x58)



#endif /* TIMER0_HW_H_ */