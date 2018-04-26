/*
 * Servo.h
 *
 * Created: 4/24/2018 9:10:48 PM
 *  Author: elbehairy
 */ 


#ifndef SERVO_H_
#define SERVO_H_

#define F_CPU 16000000UL
#define min 150
#define max 525
#define newValue 5
#define minAngle 0
#define maxAngle 120
#define oldValue 2
#define mid_X 260
#define mid_Y 370

void gimbal_init();
void originalPosition();
void gimbal_angle(int x, int y);




#endif /* SERVO_H_ */