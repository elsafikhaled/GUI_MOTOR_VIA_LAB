/*
 * PWM0_EKE.c
 *
 *  Created on: ??�/??�/????
 *      Author: El-safi
 */
#include "PWM0_EKE.h"


void PWM0_EKE_init(void)
{
  TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<CS00)|(1<<CS02)|(1<<COM01); // FAST PWM ,non INVERTING MODE, 1024 PRESCALER
  TCCR0&=~(1<<FOC0);                                        // AS PWM mode must this bit to be zero
  TCNT0=0;                                                  // counter =0 at first
 // stop interrupts for all modes and global interrupt
  TIMSK&=~(1<<OCIE0)|(1<<TOIE0);
  TIFR|=(1<<TOV0)|(1<<OCF0);
  SREG&=~(1<<7);
  DDRB|=(1<<PB3);


}

void PWM0_EKE_duty(U8_t duty)
{
	OCR0=duty;
}

void PWM0_EKE_start(void)
{

	 OCR0=0;                                                   // duty=0 at first (full speed)
}

void PWM0_EKE_stop(void)
{
	TCCR0=0x00;
}


