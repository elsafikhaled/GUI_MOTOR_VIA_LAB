/*
 * GUI.c
 *
 *  Created on: ٠٢‏/٠٢‏/٢٠١٧
 *      Author: El-safi
 */
#include "GUI.h"

void GUI_1(U8_t speed){
	U8_t tb='1';
	while(1){
	PWM0_EKE_duty(0);
	goToRowColumn(1,1);
	EKE_LCD_string((U8_t*)"Speed: ");
	goToRowColumn(1,7);
	EKE_LCD_intNumASCII((U16_t)0);
	goToRowColumn(1,10);
	EKE_LCD_string((U8_t*)"%      ");
	goToRowColumn(2,1);
	EKE_LCD_string((U8_t*)"Motor:OFF  SET:S");
	tb=TB_getchar_notWait(tb);
	if(tb=='S')break;
}
}
/* ********************************************************/
void GUI_intro(U8_t speed){
	PWM0_EKE_duty(0);
	goToRowColumn(1,1);
	EKE_LCD_string((U8_t*)"Speed: ");
	goToRowColumn(1,7);
	EKE_LCD_intNumASCII((U16_t)0);
	goToRowColumn(1,10);
	EKE_LCD_string((U8_t*)"%      ");
	goToRowColumn(2,1);
	EKE_LCD_string((U8_t*)"Motor:OFF  SET:S");
}
/* ********************************************************* */
void GUI_MAIN(void){
	U8_t tb=0;
	while(1){

	goToRowColumn(1,1);
	EKE_LCD_string((U8_t*)"ON:N       OFF:F");
	goToRowColumn(2,1);
	EKE_LCD_string((U8_t*)"Speed: A B C D  ");
    tb=TbUart_get_char();
    switch(tb){
      case 'A':GUI_4(65);break;
      case 'B':GUI_4(128);break;
      case 'C':GUI_4(190);break;
      case 'D':GUI_4(255);break;
      case 'F':GUI_1(0);break;
      case 'N':GUI_3(100);break;
    }
	}
}

/* *************************************************************/
void GUI_3(U8_t speed){
	U8_t tb='1';
	while(1){
	PWM0_EKE_duty((speed/100)*255);
	goToRowColumn(1,1);
	EKE_LCD_string((U8_t*)"Speed: ");
	goToRowColumn(1,7);
	EKE_LCD_intNumASCII((U16_t)speed);
	goToRowColumn(1,10);
	EKE_LCD_string((U8_t*)"%      ");
	goToRowColumn(2,1);
	EKE_LCD_string((U8_t*)"Motor:ON   SET:S");
	tb=TB_getchar_notWait(tb);
	if(tb=='S')break;
	}
}
/* ****************************************************************** */
void GUI_4(U8_t speed){
	U8_t tb='1';
	while(1){
	PWM0_EKE_duty(speed);
	goToRowColumn(1,1);
	EKE_LCD_string((U8_t*)"Speed: ");
	goToRowColumn(1,7);
	switch(speed){
	case 65 :	EKE_LCD_intNumASCII((U16_t)25);break;
	case 128:	EKE_LCD_intNumASCII((U16_t)50);break;
	case 190:	EKE_LCD_intNumASCII((U16_t)75);break;
	case 255:	EKE_LCD_intNumASCII((U16_t)100);break;
	default:
		break;
	}
	goToRowColumn(1,10);
	EKE_LCD_string((U8_t*)"%      ");
	goToRowColumn(2,1);
	EKE_LCD_string((U8_t*)"Motor:ON   SET:S");
	tb=TB_getchar_notWait(tb);
	if(tb=='S')break;
	}

}
/* ********************************************************************** */
