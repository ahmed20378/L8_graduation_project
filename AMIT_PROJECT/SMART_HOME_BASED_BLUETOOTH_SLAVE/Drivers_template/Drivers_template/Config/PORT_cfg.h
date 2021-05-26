/*
 * PORT_cfg.h
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */

#ifndef PORT_CFG_H_
#define PORT_CFG_H_
/*****************Includes*********************/

#include "../MCAL/PORT_DRIVER/PORT_Types.h"

/********************Defines************************/

#define DIR_INPUT			0
#define DIR_OUTPUT			1

/*****************************CFG****************************/

const PORT_PinDirType PortCfg = {{

	/*Pin_Dir_A0 */	DIR_OUTPUT, /*ADC0*/
	/*Pin_Dir_A1 */	DIR_OUTPUT, /*ADC1*/
	/*Pin_Dir_A2 */	DIR_OUTPUT, /*ADC2*/
	/*Pin_Dir_A3 */	DIR_OUTPUT, /*ADC3*/
	/*Pin_Dir_A4 */	DIR_OUTPUT, /*ADC4*/
	/*Pin_Dir_A5 */	DIR_OUTPUT, /*ADC5*/
	/*Pin_Dir_A6 */	DIR_OUTPUT, /*ADC6*/
	/*Pin_Dir_A7 */	DIR_OUTPUT, /*ADC7*/

	/*Pin_Dir_B0 */	DIR_OUTPUT,
	/*Pin_Dir_B1 */	DIR_OUTPUT,
	/*Pin_Dir_B2 */	DIR_OUTPUT, /*INT2/AIN0*/
	/*Pin_Dir_B3 */	DIR_OUTPUT,	/*OC0/AIN1*/
	/*Pin_Dir_B4 */	DIR_OUTPUT, /*SS*/
	/*Pin_Dir_B5 */	DIR_OUTPUT, /*MOSI*/
	/*Pin_Dir_B6 */	DIR_OUTPUT, /*MISO*/
	/*Pin_Dir_B7 */	DIR_OUTPUT, /*SCK*/

	/*Pin_Dir_C0 */	DIR_INPUT, /*SCL*/
	/*Pin_Dir_C1 */	DIR_INPUT, /*SDA*/
	/*Pin_Dir_C2 */	DIR_OUTPUT, /*TCK*/
	/*Pin_Dir_C3 */	DIR_OUTPUT,/*TMS*/
	/*Pin_Dir_C4 */	DIR_OUTPUT, /*TDO*/
	/*Pin_Dir_C5 */	DIR_OUTPUT,/*TDI*/
	/*Pin_Dir_C6 */	DIR_OUTPUT, /*TOSC1*/
	/*Pin_Dir_C7 */	DIR_OUTPUT,	/*TOSC2*/

	/*Pin_Dir_D0 */	DIR_INPUT,  /*UART Rx*/
	/*Pin_Dir_D1 */	DIR_OUTPUT, /*Uart Tx*/
	/*Pin_Dir_D2 */	DIR_OUTPUT, /*INT0*/
	/*Pin_Dir_D3 */	DIR_OUTPUT, /*INT1*/
	/*Pin_Dir_D4 */	DIR_OUTPUT, /*OC1B*/
	/*Pin_Dir_D5 */	DIR_OUTPUT,	/*OC1A*/
	/*Pin_Dir_D6 */	DIR_OUTPUT, /*ICP*/
	/*Pin_Dir_D7 */	DIR_OUTPUT /*OC2*/
}};

#endif /* PORT_CFG_H_ */
