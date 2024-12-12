/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Red_H_Pin GPIO_PIN_1
#define Red_H_GPIO_Port GPIOA
#define Yellow_H_Pin GPIO_PIN_2
#define Yellow_H_GPIO_Port GPIOA
#define Green_H_Pin GPIO_PIN_3
#define Green_H_GPIO_Port GPIOA
#define Red_V_Pin GPIO_PIN_4
#define Red_V_GPIO_Port GPIOA
#define Yellow_V_Pin GPIO_PIN_5
#define Yellow_V_GPIO_Port GPIOA
#define Green_V_Pin GPIO_PIN_6
#define Green_V_GPIO_Port GPIOA
#define SEG_0_Pin GPIO_PIN_0
#define SEG_0_GPIO_Port GPIOB
#define SEG_1_Pin GPIO_PIN_1
#define SEG_1_GPIO_Port GPIOB
#define SEG_2_Pin GPIO_PIN_2
#define SEG_2_GPIO_Port GPIOB
#define EN3_Pin GPIO_PIN_10
#define EN3_GPIO_Port GPIOB
#define Led_Red_Blink_Pin GPIO_PIN_12
#define Led_Red_Blink_GPIO_Port GPIOB
#define Button_Pressed_Pin GPIO_PIN_13
#define Button_Pressed_GPIO_Port GPIOB
#define MODE_Pin GPIO_PIN_8
#define MODE_GPIO_Port GPIOA
#define INCREASE_Pin GPIO_PIN_9
#define INCREASE_GPIO_Port GPIOA
#define SET_Pin GPIO_PIN_10
#define SET_GPIO_Port GPIOA
#define SEG_3_Pin GPIO_PIN_3
#define SEG_3_GPIO_Port GPIOB
#define SEG_4_Pin GPIO_PIN_4
#define SEG_4_GPIO_Port GPIOB
#define SEG_5_Pin GPIO_PIN_5
#define SEG_5_GPIO_Port GPIOB
#define SEG_6_Pin GPIO_PIN_6
#define SEG_6_GPIO_Port GPIOB
#define EN0_Pin GPIO_PIN_7
#define EN0_GPIO_Port GPIOB
#define EN1_Pin GPIO_PIN_8
#define EN1_GPIO_Port GPIOB
#define EN2_Pin GPIO_PIN_9
#define EN2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
