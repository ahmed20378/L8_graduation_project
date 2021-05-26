/*
 * ADC.c
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */

/*****************Includes*****************/
#include "../../Utils/Std_Types.h"
#include "../../Utils/Bit_Math.h"
#include "../../Config/ADC_cfg.h"
#include <avr/interrupt.h>
#include "ADC_types.h"
#include "ADC_hw.h"
#include "ADC.h"

/********************Implementation*******************/
/*******************************************************************
* NAME :			void ADC_init(void)
* DESCRIPTION :     Initialize the ADC
* INPUTS :			void
* OUTPUTS :			void
*/
void ADC_init(void)
{
	/************* Add your code here******************/	
	
	#if ADC_TYPE == INTERRUPT
		/************* Add your code here******************/		
	#endif	
	
	/************* Add your code here******************/	
		
}
/*******************************************************************
* NAME :			void ADC_startConversion(ADC_ChannelType Channel)
* DESCRIPTION :     Start the conversion of ADC
* INPUTS :			ADC_ChannelType
* OUTPUTS :			void
*/
void ADC_startConversion(ADC_ChannelType Channel)
{
	/************* Add your code here******************/	
}

/*******************************************************************
* NAME :			uint16 ADC_getVoltage_mv(void)
* DESCRIPTION :     Returns the voltage of ADC in millivolt
* INPUTS :			void
* OUTPUTS :			uint16
*/
uint16 ADC_getVoltage_mv(void)
{
	
	/************* Add your code here******************/	
	
}