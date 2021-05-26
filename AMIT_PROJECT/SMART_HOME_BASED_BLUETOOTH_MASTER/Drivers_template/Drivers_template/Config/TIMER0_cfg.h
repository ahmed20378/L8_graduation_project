/*
 * TIMER0_cfg.h
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */ 


#ifndef TIMER0_CFG_H_
#define TIMER0_CFG_H_

/*****************Defines*********************/
/*
 * TIMER0_MODE_CTC
 * TIMER0_MODE_NORMAL
 * TIMER0_MODE_FAST_PWM
 * TIMER0_MODE_PHASE_CORRECTION
 * */
#define TIMER0_MODE_SELECTOR				TIMER0_MODE_CTC

/*
 * TIMER0_PRESCALER_1_msk
 * TIMER0_PRESCALER_8_msk
 * TIMER0_PRESCALER_64_msk
 * TIMER0_PRESCALER_256_msk
 * TIMER0_PRESCALER_1024_msk
 * */
#define TIMER0_PRESCALER_SELECTOR_msk		TIMER0_PRESCALER_1024_msk

/*
 * choose number between [0-255]
 * */
#define TIMER0_STEPS_TO_COUNT					100
/*
 *choose between
 * INTERRUPT
 *POLLING
 */
#define TIMER0_TYPE								INTERRUPT

#endif /* TIMER0_CFG_H_ */