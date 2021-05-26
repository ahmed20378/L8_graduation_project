/*
 * LCD.c
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */

/***************Includes****************/

#include "../../Utils/Bit_Math.h"
#include "../../Utils/Std_Types.h"
#include "../../MCAL/DIO/DIO.h"
#include "../../Config/LCD_cfg.h"
#include "LCD.h"
#include <util/delay.h>

/*****************Defines********************/

#define LCD_MODE_4_PIN		0
#define LCD_MODE_8_PIN		1

/******************Local Prototypes******************/

inline static void LCD_writePort(uint8 PortData);

/*********************Implementations**************************/

/*******************************************************************
* NAME :            void LCD_init(void)
* DESCRIPTION :		Initialize the LCD
* INPUTS :			void
* OUTPUTS :			void
*/
void LCD_init(void)
{
	


	#if LCD_MODE_PIN == LCD_MODE_8_PIN
	
		/************* Add your code here******************/
		
	#elif LCD_MODE_PIN == LCD_MODE_4_PIN
	
		/************* Add your code here******************/
			
	#endif
	
		/************* Add your code here******************/
		
}
/*******************************************************************
* NAME :            void LCD_writeData(uint8 Data)
* DESCRIPTION :		write single character to the LCD
* INPUTS :			uint8
* OUTPUTS :			void
*/
void LCD_writeData(uint8 Data)
{
	
	/************* Add your code here******************/	
	
}

/*******************************************************************
* NAME :            void LCD_writeCmd(uint8 Cmd)
* DESCRIPTION :		write command to the LCD
* INPUTS :			uint8
* OUTPUTS :			void
*/
void LCD_writeCmd(uint8 Cmd)
{
	
	/************* Add your code here******************/
		
}

/*******************************************************************
* NAME :            inline static void LCD_writePort(uint8 PortData)
* DESCRIPTION :		write the given data to the LCD in the correct sequence
* INPUTS :			uint8
* OUTPUTS :			void
*/
inline static void LCD_writePort(uint8 PortData)
{
	#if LCD_MODE_PIN == LCD_MODE_8_PIN
	
	/************* Add your code here******************/
	
	#elif LCD_MODE_PIN == LCD_MODE_4_PIN
	
	/************* Add your code here******************/

	#endif
	
	/************* Add your code here******************/
	
}

/*******************************************************************
* NAME :            void LCD_writeString(uint8* str, uint8 row, uint8 col)
* DESCRIPTION :		Write a string to the LCD in the given row and column
* INPUTS :			uint8*, uint8, uint8
* OUTPUTS :			void
*/
void LCD_writeString(uint8* str, uint8 row, uint8 col)
{
	
	/************* Add your code here******************/
	
}

/*******************************************************************
void LCD_goTo( uint8 row, uint8 col)
* DESCRIPTION :		go to certain row and column
* INPUTS :			uint8, uint8
* OUTPUTS :			void
*/
void LCD_goTo( uint8 row, uint8 col)
{
	
	/************* Add your code here******************/	
	
}
/*******************************************************************
* NAME :            void LCD_Clear(void)
* DESCRIPTION :		Clear the LCD
* INPUTS :			void
* OUTPUTS :			void
*/
void LCD_Clear(void)
{
	
	/************* Add your code here******************/

}






