/*
 * Keypad_cfg.h
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */


#ifndef KEYPAD_CFG_H_
#define KEYPAD_CFG_H_

/******************************Defines*********************************/

#define KP_PIN_ROW_0							Dio_Channel_D0
#define KP_PIN_ROW_1							Dio_Channel_D1
#define KP_PIN_ROW_2							Dio_Channel_D2
#define KP_PIN_ROW_3							Dio_Channel_D3


#define KP_PIN_COL_0							Dio_Channel_D4
#define KP_PIN_COL_1							Dio_Channel_D5
#define KP_PIN_COL_2							Dio_Channel_D6
#define KP_PIN_COL_3							Dio_Channel_D7

/*
 * Please Configure values for the following layout
 * 		___________________________________________________________
 *		|KP_BUTON_0	 |	KP_BUTON_1	|	KP_BUTON_2	|	KP_BUTON_3 |
 *      |____________|______________|_______________|______________|
 * 		|KP_BUTON_4	 |	KP_BUTON_5	|	KP_BUTON_6	|	KP_BUTON_7 |
 *      |____________|______________|_______________|______________|
 * 		|KP_BUTON_8	 |	KP_BUTON_9	|	KP_BUTON_10	|	KP_BUTON_11|
 *      |____________|______________|_______________|______________|
 * 		|KP_BUTON_12 |	KP_BUTON_13	|	KP_BUTON_14	|	KP_BUTON_15|
 * 		|____________|______________|_______________|______________|
 */
#define KP_BUTON_0								'1'
#define KP_BUTON_1								'2'
#define KP_BUTON_2								'3'
#define KP_BUTON_3								'+'

#define KP_BUTON_4								'4'
#define KP_BUTON_5								'5'
#define KP_BUTON_6								'6'
#define KP_BUTON_7								'-'

#define KP_BUTON_8								'7'
#define KP_BUTON_9								'8'
#define KP_BUTON_10								'9'
#define KP_BUTON_11								'*'

#define KP_BUTON_12								'='
#define KP_BUTON_13								'0'
#define KP_BUTON_14								'^'
#define KP_BUTON_15								'/'

/* if KP_ACTIVE_TYPE is STD_high this means the buttons are active high
 *if KP_ACTIVE_TYPE is STD_low this means the buttons are active low
 */
#define KP_ACTIVE_TYPE							STD_low

/************Number of rows and colums*****************/

#define COL_NUMBER					4
#define ROW_NUMBER					4



#endif /* KEYPAD_CFG_H_ */