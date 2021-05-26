/*
 * TIMER0.h
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */



#ifndef TIMER0_H_
#define TIMER0_H_

/*******************Defines********************/

#define INTERRUPT					0
#define POLLING						1

#define TIMER0_MODE_CTC             			100
#define TIMER0_MODE_NORMAL          			101
#define TIMER0_MODE_FAST_PWM        			102
#define TIMER0_MODE_PHASE_CORRECTION			103

#define TIMER0_PRESCALER_clr_msk				0b11111000
#define TIMER0_PRESCALER_1_msk  				0b00000001
#define TIMER0_PRESCALER_8_msk   				0b00000010
#define TIMER0_PRESCALER_64_msk  				0b00000011
#define TIMER0_PRESCALER_256_msk 				0b00000100
#define TIMER0_PRESCALER_1024_msk				0b00000101

/***********************Prototypes**************************/

void TIMER0_init(void);
void TIMER0_enInterrupt(void);
void TIMER0_disInterrupt(void);




#endif /* TIMER0_H_ */