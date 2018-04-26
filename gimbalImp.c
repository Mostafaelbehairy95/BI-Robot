/*
 * ServoImp.c
 *
 * Created: 4/24/2018 9:11:53 PM
 *  Author: elbehairy
 */ 

#include "gimbal.h"
#include <avr/io.h>
#include <util/delay.h>


void gimbal_init(){
	TCCR1A |= (1 << COM1A1)| (1 << COM1B1) | (1 << WGM11); // Non inverting mode for A and B
	TCCR1B |= (1 << WGM12) | (1 << WGM13) | (1 << CS11)| (1 << CS10); // Mode 14 which fast PWM and top is ICR1  and prescale 64 
	ICR1 = 4999; // ICR1 = ((F_CPU / ( HZ of servo * N that prescale)) - 1)
//	OCR1A = mid_X;
//	OCR1B = mid_Y;
}
void originalPosition(){
	OCR1A = mid_X;
	OCR1B = mid_Y;	
}
void gimbal_angle(int x, int y){
	
	OCR1A = (((x * newValue)/ oldValue) + min);
	OCR1B = (((y * newValue)/ oldValue) + min);
}
