/*
 * motor_control.c
 *
 *  Created on: 26 Apr 2026
 *      Author: melkl
 */
#include "motor_control.h"

void Set_Left_Motor(int8_t direction, uint32_t speed) {
    // Set the speed via PWM on Left Motor Channel
    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, speed);

    if (direction == 1) {
        // Forward (Lazy fix logic)
        HAL_GPIO_WritePin(MOTOR_L_IN1_GPIO_Port, MOTOR_L_IN1_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(MOTOR_L_IN2_GPIO_Port, MOTOR_L_IN2_Pin, GPIO_PIN_SET);
    } else if (direction == -1) {
        // Reverse
        HAL_GPIO_WritePin(MOTOR_L_IN1_GPIO_Port, MOTOR_L_IN1_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(MOTOR_L_IN2_GPIO_Port, MOTOR_L_IN2_Pin, GPIO_PIN_RESET);
    } else {
        // Stop
        HAL_GPIO_WritePin(MOTOR_L_IN1_GPIO_Port, MOTOR_L_IN1_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(MOTOR_L_IN2_GPIO_Port, MOTOR_L_IN2_Pin, GPIO_PIN_RESET);
    }
}

void Set_Right_Motor(int8_t direction, uint32_t speed) {
    // Set the speed via PWM on Right Motor Channel
    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_3, speed);

    if (direction == 1) {
        // Forward (Lazy fix logic)
        HAL_GPIO_WritePin(MOTOR_R_IN4_GPIO_Port, MOTOR_R_IN4_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(MOTOR_R_IN3_GPIO_Port, MOTOR_R_IN3_Pin, GPIO_PIN_SET);
    } else if (direction == -1) {
        // Reverse
        HAL_GPIO_WritePin(MOTOR_R_IN4_GPIO_Port, MOTOR_R_IN4_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(MOTOR_R_IN3_GPIO_Port, MOTOR_R_IN3_Pin, GPIO_PIN_RESET);
    } else {
        // Stop
        HAL_GPIO_WritePin(MOTOR_R_IN4_GPIO_Port, MOTOR_R_IN4_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(MOTOR_R_IN3_GPIO_Port, MOTOR_R_IN3_Pin, GPIO_PIN_RESET);
    }
}

