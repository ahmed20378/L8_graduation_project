/*
 * PORT.c
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */

/************Includes********************/
#include "PORT_hw.h"
#include "PORT_Types.h"
#include "PORT.h"
/*******************Global Variables***************/
extern PORT_PinDirType PortCfg ;

/*************************Implementation************************/

/*******************************************************************
* NAME :			void PORT_init(void)
* DESCRIPTION :     Initialize the ports directions with the user configurations of the pins
* INPUTS :			void
* OUTPUTS :			void
*/
void PORT_init(void)
{
	/*
	 * set pins directions according to
	 * user configuration
	 * */
	DDRA_Reg = PortCfg.Byte[0];
	DDRB_Reg = PortCfg.Byte[1];
	DDRC_Reg = PortCfg.Byte[2];
	DDRD_Reg = PortCfg.Byte[3];

}
