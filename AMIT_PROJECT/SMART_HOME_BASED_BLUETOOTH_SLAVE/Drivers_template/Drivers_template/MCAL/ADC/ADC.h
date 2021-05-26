/*
 * ADC.h
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */

#ifndef ADC_H_
#define ADC_H_
/************************Defines*********************/

#define INTERRUPT					0
#define POLLING						1

#define ADC_VOLTAGE_REF_clr_msk						0b00111111
#define ADC_VOLTAGE_REF_AVCC						0b01000000
#define ADC_VOLTAGE_REF_AREF						0b00000000
#define ADC_VOLTAGE_REF_2_56v						0b11000000

#define ADC_MODE_AUTO_TRIGGER						1
#define ADC_MODE_SINGLE_CONVERSION					0

#define ADC_PRESCALER_clr_msk						0b11111000
#define ADC_PRESCALER_2_msk							0b00000000
#define ADC_PRESCALER_4_msk							0b00000010
#define ADC_PRESCALER_8_msk							0b00000011
#define ADC_PRESCALER_16_msk		   				0b00000100
#define ADC_PRESCALER_32_msk						0b00000101
#define ADC_PRESCALER_64_msk						0b00000110
#define ADC_PRESCALER_128_msk						0b00000111

#define ADC_AUTO_TRIG_SRC_clr_msk					0b00011111
#define ADC_AUTO_TRIG_SRC_FREE_RUNNING_msk			0b00000000
#define ADC_AUTO_TRIG_SRC_ANALOG_COMP_msk			0b00100000
#define ADC_AUTO_TRIG_SRC_EXTI0_msk					0b01000000
#define ADC_AUTO_TRIG_SRC_TIMER0_COMP_msk			0b01100000
#define ADC_AUTO_TRIG_SRC_TIMER0_OVF_msk			0b10000000
#define ADC_AUTO_TRIG_SRC_TIMER1_COMP_msk			0b10100000
#define ADC_AUTO_TRIG_SRC_TIMER1_OVF_msk			0b11000000
#define ADC_AUTO_TRIG_SRC_TIMER1_CAPT_msk			0b11100000

#define ADC_CHANNEL_SELECTOR_clr_msk				0b11100000

/****************************Prototypes****************************/

void ADC_init(void);
void ADC_startConversion(ADC_ChannelType Channel);
uint16 ADC_getVoltage_mv(void);



#endif /* ADC_H_ */