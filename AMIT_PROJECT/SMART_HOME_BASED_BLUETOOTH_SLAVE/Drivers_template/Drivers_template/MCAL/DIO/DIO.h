/*
 * DIO.h
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */

#ifndef DIO_H_
#define DIO_H_
/********************Includes**********************/

#include "../../Utils/Std_Types.h"
#include "DIO_types.h"

/***********************Prototypes***********************/
STD_levelType Dio_ReadChannel(Dio_ChannelType ChannelId);
void Dio_WriteChannel(Dio_ChannelType ChannelId, STD_levelType Level);
uint8 Dio_ReadPort(Dio_PortType PortId );
void Dio_WritePort( Dio_PortType PortId, uint8 val);
void Dio_FlipChannel( Dio_ChannelType ChannelId);
void Dio_FlipPort(Dio_PortType PortId);


#endif /* DIO_H_ */
