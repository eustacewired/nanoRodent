/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define MOTOR_R_IN4_Pin GPIO_PIN_0
#define MOTOR_R_IN4_GPIO_Port GPIOA
#define MOTOR_R_IN3_Pin GPIO_PIN_1
#define MOTOR_R_IN3_GPIO_Port GPIOA
#define MOTOR_R_PWM_Pin GPIO_PIN_2
#define MOTOR_R_PWM_GPIO_Port GPIOA
#define MOTOR_L_IN2_Pin GPIO_PIN_3
#define MOTOR_L_IN2_GPIO_Port GPIOA
#define MOTOR_L_IN1_Pin GPIO_PIN_4
#define MOTOR_L_IN1_GPIO_Port GPIOA
#define MOTOR_L_PWM_Pin GPIO_PIN_5
#define MOTOR_L_PWM_GPIO_Port GPIOA
#define LED_LEFT_BACK_Pin GPIO_PIN_10
#define LED_LEFT_BACK_GPIO_Port GPIOB
#define LED_RIGHT_BACK_Pin GPIO_PIN_12
#define LED_RIGHT_BACK_GPIO_Port GPIOB
#define IR_LEFT_Pin GPIO_PIN_5
#define IR_LEFT_GPIO_Port GPIOB
#define MPU6050_SCL_Pin GPIO_PIN_6
#define MPU6050_SCL_GPIO_Port GPIOB
#define MPU6050_SDA_Pin GPIO_PIN_7
#define MPU6050_SDA_GPIO_Port GPIOB
#define IR_FRONT_Pin GPIO_PIN_8
#define IR_FRONT_GPIO_Port GPIOB
#define IR_RIGHT_Pin GPIO_PIN_9
#define IR_RIGHT_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
