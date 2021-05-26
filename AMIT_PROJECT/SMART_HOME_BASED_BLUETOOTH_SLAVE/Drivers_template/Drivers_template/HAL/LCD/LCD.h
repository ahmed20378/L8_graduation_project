/*
 * LCD.h
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */


#ifndef LCD_H_
#define LCD_H_
/***************Defines******************/
/*kindly add the cmd's here*/

/******************Prototypes********************/
void LCD_init(void);
void LCD_writeData(uint8 Data);
void LCD_writeCmd(uint8 Cmd);
void LCD_writeString(uint8* str, uint8 row, uint8 col);
void LCD_goTo( uint8 row, uint8 col);
void LCD_Clear(void);



#endif /* LCD_H_ */