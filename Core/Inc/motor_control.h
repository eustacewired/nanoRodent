#ifndef INC_MOTOR_CONTROL_H_
#define INC_MOTOR_CONTROL_H_

#include "main.h"

// We need to tell this file that htim2 exists in main.c
extern TIM_HandleTypeDef htim2;

void Set_Left_Motor(int8_t direction, uint32_t speed);
void Set_Right_Motor(int8_t direction, uint32_t speed);

#endif /* INC_MOTOR_CONTROL_H_ */
