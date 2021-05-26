/*
 * motors.h
 *
 * Created: 4/3/2021 5:35:07 AM
 *  Author: ahmed
 */ 


#ifndef MOTORS_H_
#define MOTORS_H_

#define MOTOR_DIRC_SELCTE_DDR_A         DDRA
#define MOTOR_DIRC_SELCTE_DDR_B         DDRB
#define MOTOR_DIRC_SELCTE_DDR_C         DDRC
#define MOTOR_DIRC_SELCTE_DDR_D         DDRD
/*******/
#define MOTOR_PORT_SELCTE_PORT_A        PORTA
#define MOTOR_PORT_SELCTE_PORT_B        PORTB
#define MOTOR_PORT_SELCTE_PORT_C        PORTC
#define MOTOR_PORT_SELCTE_PORT_D        PORTD
/*******/

#define PIN_0            0b00000001
#define PIN_1            0b00000010
#define PIN_2            0b00000100
#define PIN_3            0b00001000
#define PIN_4            0b00010000
#define PIN_5            0b00100000
#define PIN_6            0b01000000
#define PIN_7            0b10000000

/*******/

void forward_motors();
void backward_motors();
void right_motors();
void left_motors();
void stop_motors();



#endif /* MOTORS_H_ */