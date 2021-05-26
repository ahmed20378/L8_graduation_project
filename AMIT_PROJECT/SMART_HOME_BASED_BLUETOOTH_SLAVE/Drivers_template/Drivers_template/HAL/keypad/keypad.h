/*
 * keypad.h
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */



#ifndef KEYPAD_H_
#define KEYPAD_H_
/*********************Defines************************/
#define KP_RELEASED								255
#define NO_VALID_INPUT							0xFF
#define NO_VALID_OUTPUT							0xFF
/***********************Prototypes***************************/
void KeypadInit(void);
unsigned char KeypadRead(void);

#endif /* KEYPAD_H_ */