/*
 * DIO.c
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */

/************Includes********************/
#include "../../Utils/Bit_Math.h"
#include "../../Utils/Std_Types.h"
#include "DIO_types.h"
#include "DIO_hw.h"
#include "DIO.h"
/*******************Global Variables***************/


/*************************Implementation************************/

/*******************************************************************
* NAME :            STD_levelType Dio_ReadChannel(Dio_ChannelType ChannelId)
* DESCRIPTION :     takes the ChannelId(pin)(0-31) and returns its state
*					STD_high or STD_low
* INPUTS :			Dio_ChannelType
* OUTPUTS :			STD_levelType
*/
STD_levelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{
	STD_levelType ret = STD_low; /*sets initial value to avoid warning*/ 
	Dio_PortType PortId = ChannelId /8;
	uint8 ChannelPos = ChannelId % 8;
	/************* Add your code here******************/


	return ret;
}

/*******************************************************************
* NAME :            STD_levelType Dio_ReadChannel(Dio_ChannelType ChannelId)
* DESCRIPTION :     takes the ChannelId(pin) and the state STD_high or STD_low
*					and sets the pin to the state
* INPUTS :			Dio_ChannelType, STD_levelType
* OUTPUTS :			void
*/
void Dio_WriteChannel(Dio_ChannelType ChannelId, STD_levelType Level)
{
	Dio_PortType PortId = ChannelId /8;
	uint8 ChannelPos = ChannelId % 8;
	/************* Add your code here******************/

}

/*******************************************************************
* NAME :            uint8 Dio_ReadPort(Dio_PortType PortId )
* DESCRIPTION :     takes the PortId and returns the state of the port 
*					in a type uint8 
* INPUTS :			Dio_PortType
* OUTPUTS :			uint8
*/
uint8 Dio_ReadPort(Dio_PortType PortId )
{
	uint8 ret = 0;/*sets initial value to avoid warning*/ 
	
	/************* Add your code here******************/

	return ret;

}

/*******************************************************************
* NAME :            void Dio_WritePort( Dio_PortType PortId, uint8 val)
* DESCRIPTION :     takes the PortId and the value of the port
*					in a type uint8 and sets the value of the port to the input value
* INPUTS :			Dio_PortType , uint8
* OUTPUTS :			void
*/
void Dio_WritePort( Dio_PortType PortId, uint8 val)
{
	/************* Add your code here******************/
}

/*******************************************************************
* NAME :            void Dio_FlipChannel( Dio_ChannelType ChannelId)
* DESCRIPTION :     takes the ChannelId as input and Flip (toggle) its value
* INPUTS :			Dio_ChannelType 
* OUTPUTS :			void
*/
void Dio_FlipChannel( Dio_ChannelType ChannelId)
{
	Dio_PortType PortId = ChannelId /8;
	uint8 ChannelPos = ChannelId % 8;
	/************* Add your code here******************/

}

/*******************************************************************
* NAME :			void Dio_FlipPort(Dio_PortType PortId)
* DESCRIPTION :     takes the PortId as input and Flip (toggle) its value
* INPUTS :			Dio_PortType
* OUTPUTS :			void
*/
void Dio_FlipPort(Dio_PortType PortId)
{
	/************* Add your code here******************/
}
