/*
 * CONTROL.c
 *
 *  Created on: ٠٢‏/٠٢‏/٢٠١٧
 *      Author: El-safi
 */
#include "GUI.h"

/* Global data type for speed control */
 U8_t speed=50;

int main(void){
/*  local  Data types definitions for main function */
U8_t TB_data='F';

/*  motor init */
DDRB|=(1<<PB0)|(1<<PB1);
PORTB|=(1<<PB0);
PORTB&=~(1<<PB1);

/*  SYSTEM  initialization  */
EKE_LCD_INIT();
TbUart_init();
PWM0_EKE_init();
PWM0_EKE_start();

  while(1){
            //Introduction GUI
	          GUI_intro(0);
              TB_data=TbUart_get_char();
              if(TB_data=='S'){
            	               // main gui for motor control
            	                GUI_MAIN();
                               }


  }
	return 0;
}
