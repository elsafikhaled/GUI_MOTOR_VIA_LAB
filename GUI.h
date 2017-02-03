/*
 * GUI.h
 *
 *  Created on: ٠٢‏/٠٢‏/٢٠١٧
 *      Author: El-safi
 */

#ifndef GUI_H_
#define GUI_H_
#include "lcdEKE.h"
#include <util/delay.h>
#include "TbUart.h"
#include "PWM0_EKE.h"


void GUI_intro(U8_t speed);
/* Function: void GUI_intro(U8_t speed);
 * Target  : display speed percentage,motor operation(ON/OFF),setting choice
 * Input   : void   (no paramaters,arguments)
 * Output  : void
 * **************************************************************************/
void GUI_1(U8_t speed);
/* Function: void GUI_1(void);
 * Target  : display speed percentage,motor operation(ON/OFF),setting choice
 * Input   : void   (no paramaters,arguments)
 * Output  : void
 * **************************************************************************/

void GUI_MAIN(void);
/* Function: void GUI_2(void);
 * Target  : display control paramaters (ON/OFF),speed(A,B,C.D).
 * Input   : void   (no paramaters,arguments)
 * Output  : void
 * **************************************************************************/

void GUI_3(U8_t speed);
/* Function: void GUI_3(void);
 * Target  : display speed percentage,motor operation(ON/OFF),setting choice
 * Input   : void   (no paramaters,arguments)
 * Output  : void
 * **************************************************************************/

void GUI_4(U8_t speed);
/* Function: void GUI_4(void);
 * Target  : display speed percentage,motor operation(ON/OFF),setting choice
 * Input   : void   (no paramaters,arguments)
 * Output  : void
 * **************************************************************************/

#endif /* GUI_H_ */
