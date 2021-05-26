/*
 * keypad.c
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */
/************Includes********************/

#include "../../Utils/Bit_Math.h"
#include "../../Utils/Std_Types.h"
#include "keypad.h"
#include "../../Config/Keypad_cfg.h"

/******************Defines********************/

#if KP_ACTIVE_TYPE == STD_low
#define KP_INTERNAL_PULL_UP_RESISTOR_EN			ENABLE
#endif

#define OUTPUT_IS_STILL_VALID					((Dio_ReadChannel(KP_PIN_COL_0) == KP_ACTIVE_TYPE)\
												&&(Dio_ReadChannel(KP_PIN_COL_1) == KP_ACTIVE_TYPE)\
												&&(Dio_ReadChannel(KP_PIN_COL_2) == KP_ACTIVE_TYPE)\
												&&(Dio_ReadChannel(KP_PIN_COL_3) == KP_ACTIVE_TYPE))
												
/*********************Global Variables**********************/

static const unsigned char keypad_mapping [4][4]= {{KP_BUTON_0,KP_BUTON_1,KP_BUTON_2,KP_BUTON_3},
												   {KP_BUTON_4,KP_BUTON_5,KP_BUTON_6,KP_BUTON_7},
												   {KP_BUTON_8,KP_BUTON_9,KP_BUTON_10,KP_BUTON_11},
												   {KP_BUTON_12,KP_BUTON_13,KP_BUTON_14,KP_BUTON_15}};
													   
/***************************Implementation**********************************/

/*******************************************************************
* NAME :            void KeypadInit(void)
* DESCRIPTION :     Initialize the Keypad variables (rows,columns) in terms of
*					ports, pins, Directions
* INPUTS :			void
* OUTPUTS :			unsigned char
*/
void KeypadInit(void)
{
	/************* Add your code here******************/
		
}

/*******************************************************************
* NAME :            unsigned char KeypadRead(void)
* DESCRIPTION :     returns the value of the pressed keypad button 
*					or returns NO_VALID_OUTPUT if there is no button pressed
* INPUTS :			void
* OUTPUTS :			unsigned char
*/

unsigned char KeypadRead(void)
{
	 uint8 row = 0;
	 uint8 line = NO_VALID_INPUT;
	 unsigned char result = NO_VALID_OUTPUT;
	/************* Add your code here******************/
	
	return result;	
}