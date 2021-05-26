/*
 * conf_motors.h
 *
 * Created: 4/3/2021 7:43:29 AM
 *  Author: ahmed
 */ 


#ifndef CONF_MOTORS_H_
#define CONF_MOTORS_H_


/*
MOTOR DIRC SELCTE

MOTOR_DIRC_SELCTE_DDR_A
MOTOR_DIRC_SELCTE_DDR_B
MOTOR_DIRC_SELCTE_DDR_C
MOTOR_DIRC_SELCTE_DDR_D
*/
#define MOTOR_DIRC_SELCTE       MOTOR_DIRC_SELCTE_DDR_B
/*
MOTOR PORT SELCTE

MOTOR_PORT_SELCTE_PORT_A
MOTOR_PORT_SELCTE_PORT_B
MOTOR_PORT_SELCTE_PORT_C
MOTOR_PORT_SELCTE_PORT_D
*/
#define MOTOR_PORT_SELCTE       MOTOR_PORT_SELCTE_PORT_B

/*****************************************
SELCTE PIN FROM PORT
PIN_0
PIN_1
PIN_2
PIN_3
PIN_4
PIN_5
PIN_6
PIN_7
******************************************/
/*
MOTOR ONE A SELECT
*/
#define MOTOR_ONE_A            PIN_0
/*
MOTOR ONE B SELCTE
*/
#define MOTOR_ONE_B            PIN_1
/*
MOTOR TWO A SELCTE
*/
#define MOTOR_TWO_A            PIN_2
/*
MOTOR TWO B SELCTE
*/
#define MOTOR_TWO_B            PIN_3
/*
MOTOR ONE EN PIN
*/
#define MOTOR_ONE_EN           PIN_4
/*
MOTOR TWO EN PIN
*/
#define MOTOR_TWO_EN           PIN_5



#endif /* CONF_MOTORS_H_ */