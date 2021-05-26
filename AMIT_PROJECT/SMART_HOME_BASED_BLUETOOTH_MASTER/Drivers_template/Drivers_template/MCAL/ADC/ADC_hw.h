/*
 * ADC_hw.h
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */


#ifndef ADC_HW_H_
#define ADC_HW_H_

/*********************Defines************************/
#define ADMUX				*((uint8*)0x27)
#define ADCSRA				*((uint8*)0x26)
#define SFIOR				*((uint8*)0x50)
#define ADCLH				*((uint16*)0x24)



#endif /* ADC_HW_H_ */