/*
 * TIMER0.c
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */

/********************Includes************************/

#include "../../Utils/Std_Types.h"
#include "../../Utils/Bit_Math.h"
#include <avr/interrupt.h>
#include "../../Config/TIMER0_cfg.h"
#include "TIMER0_hw.h"
#include "TIMER0.h"
#include <avr/interrupt.h>
/***************************Global Variables*************************/

static volatile uint16 Timer_Ticks=0; /*overflow counter*/
static volatile uint16 OutputCompare_Counter =0;

/********************************Implementation**********************************/
/*******************************************************************
* NAME :            void TIMER0_init(void)
* DESCRIPTION :     Initialize the Timer0
* INPUTS :			void
* OUTPUTS :			void
*/
void TIMER0_init(void)
{
	/************* Add your code here******************/
		
	#if TIMER0_TYPE == INTERRUPT
	
		/************* Add your code here******************/	
		
	#endif
	
	/************* Add your code here******************/	
	
}

/*******************************************************************
* NAME :            void TIMER0_delay(uint16 milliseconds)
* DESCRIPTION :     delay with the given time in milliseconds
* INPUTS :			uint16
* OUTPUTS :			void
*/
void TIMER0_delay(uint16 milliseconds)
{

	/************* Add your code here******************/	
	
}

/*************************************ISR***************************************/
#if TIMER0_TYPE == INTERRUPT
ISR(TIMER0_OVF_vect)
{
	/************* Add your code here******************/	
	
}

ISR(TIMER0_COMP_vect)
{
	/************* Add your code here******************/	
	
}
#endif