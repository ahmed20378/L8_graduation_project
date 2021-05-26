/*
 * motors.c
 *
 * Created: 4/3/2021 5:34:50 AM
 *  Author: ahmed
 */ 
#include "../../Utils/Bit_Math.h"
#include "../../Utils/Std_Types.h"
#include <avr/interrupt.h>
#include "../../Config/conf_motors.h"
#include "motors.h"


void forward_motors(void)
{
	MOTOR_DIRC_SELCTE = 0xff;
	MOTOR_PORT_SELCTE = (MOTOR_ONE_EN | MOTOR_TWO_EN | MOTOR_ONE_A | MOTOR_TWO_A);
}
void backward_motors(void)
{
	MOTOR_DIRC_SELCTE = 0xff;
	MOTOR_PORT_SELCTE = (MOTOR_ONE_EN | MOTOR_TWO_EN | MOTOR_ONE_B | MOTOR_TWO_B);
}
void right_motors(void)
{
	
	MOTOR_DIRC_SELCTE = 0xff;
	MOTOR_PORT_SELCTE = (MOTOR_ONE_EN | MOTOR_TWO_EN | MOTOR_ONE_B | MOTOR_TWO_A);
}
void left_motors(void)
{
	MOTOR_DIRC_SELCTE = 0xff;
	MOTOR_PORT_SELCTE = (MOTOR_ONE_EN | MOTOR_TWO_EN | MOTOR_ONE_A | MOTOR_TWO_B);	
}
void stop_motors(void)
{
	MOTOR_DIRC_SELCTE = 0xff;
	MOTOR_PORT_SELCTE = DISABLE ;	
}
