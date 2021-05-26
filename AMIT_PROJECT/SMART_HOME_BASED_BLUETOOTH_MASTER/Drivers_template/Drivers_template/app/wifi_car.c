/*
 * wifi_car.c
 *
 * Created: 4/3/2021 8:07:45 AM
 *  Author: ahmed
 */ 
#include "../Utils/Bit_Math.h"
#include "../Utils/Std_Types.h"
#include "wifi_car_mo.h"



void check_receive_from_uart(char receive_data)
{
	
	if (receive_data == 'f')
	{
		//****** forwad func ****//
		forward_motors();
		
	}
	else if (receive_data == 'b')
	{
		/******* backward func *****/
		backward_motors();
		
	}
	else if (receive_data == 'r')
	{
		/*******right func ******/
		right_motors();
		
	}
	else if (receive_data == 'l')
	{
		/******** left func *****/
		left_motors();
		
	}
	else if (receive_data == 's')
	{
		/****** stop func ******/
		stop_motors();
		
	}
	
}