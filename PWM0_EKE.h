/*
 * PWM0_EKE.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: El-safi
 */

#ifndef PWM0_EKE_H_
#define PWM0_EKE_H_

#include <avr/io.h>
#include"std_data_types_EKE.h"



void PWM0_EKE_init(void);
/* ************************************** system initialization *******************************************
 *
 * FUNCTION    :: void PWM0_EKE_init(void);
 *
 * Parameters  :: void
 *
 * Description :: Timer0 initialization for FAST PWM AND INVERTING MODE, 8 Bits counting from 0 to 255
 *
 * Return      :: void
 *
 * *******************************************************************************************************/


void PWM0_EKE_duty(U8_t duty);
/* ************************************** system initialization *******************************************
 *
 * FUNCTION    :: void PWM0_EKE_duty(U16_t duty);
 *
 * Parameters  :: unsigned integer variable --> duty
 *
 * Description :: Timer0 OCR register  for FAST PWM AND INVERTING MODE, 8 Bits counting from 0 to 255
 *
 * Return      :: void
 *
 * *******************************************************************************************************/

void PWM0_EKE_start(void);
/* ************************************** system initialization *******************************************
 *
 * FUNCTION    :: void PWM0_EKE_start(void);
 *
 * Parameters  :: void
 *
 * Description :: Timer0 start
 *
 * Return      :: void
 *
 * *******************************************************************************************************/
void PWM0_EKE_stop(void);
/* ************************************** system initialization *******************************************
 *
 * FUNCTION    :: void PWM0_EKE_stop(void);
 *
 * Parameters  :: void
 *
 * Description :: Timer0  stop
 *
 * Return      :: void
 *
 * *******************************************************************************************************/


#endif /* PWM0_EKE_H_ */
