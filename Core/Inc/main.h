/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
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
#define BUTTON_6_Pin GPIO_PIN_13
#define BUTTON_6_GPIO_Port GPIOC
#define BLUE_LED_Pin GPIO_PIN_14
#define BLUE_LED_GPIO_Port GPIOC
#define LCD_RST_Pin GPIO_PIN_0
#define LCD_RST_GPIO_Port GPIOC
#define LCD_WR_Pin GPIO_PIN_1
#define LCD_WR_GPIO_Port GPIOC
#define LCD_RD_Pin GPIO_PIN_2
#define LCD_RD_GPIO_Port GPIOC
#define JOY1_X_Pin GPIO_PIN_0
#define JOY1_X_GPIO_Port GPIOA
#define JOY1_Y_Pin GPIO_PIN_1
#define JOY1_Y_GPIO_Port GPIOA
#define TP_CS_Pin GPIO_PIN_2
#define TP_CS_GPIO_Port GPIOA
#define BL_CTRL_Pin GPIO_PIN_3
#define BL_CTRL_GPIO_Port GPIOA
#define TP_IRQ_Pin GPIO_PIN_4
#define TP_IRQ_GPIO_Port GPIOA
#define TP_SCK_Pin GPIO_PIN_5
#define TP_SCK_GPIO_Port GPIOA
#define SDO_Pin GPIO_PIN_6
#define SDO_GPIO_Port GPIOA
#define SDI_Pin GPIO_PIN_7
#define SDI_GPIO_Port GPIOA
#define JOY2_X_Pin GPIO_PIN_4
#define JOY2_X_GPIO_Port GPIOC
#define JOY2_Y_Pin GPIO_PIN_5
#define JOY2_Y_GPIO_Port GPIOC
#define LCD_D0_Pin GPIO_PIN_0
#define LCD_D0_GPIO_Port GPIOB
#define LCD_D1_Pin GPIO_PIN_1
#define LCD_D1_GPIO_Port GPIOB
#define LCD_D2_Pin GPIO_PIN_2
#define LCD_D2_GPIO_Port GPIOB
#define LCD_D10_Pin GPIO_PIN_10
#define LCD_D10_GPIO_Port GPIOB
#define LCD_D11_Pin GPIO_PIN_11
#define LCD_D11_GPIO_Port GPIOB
#define LCD_D12_Pin GPIO_PIN_12
#define LCD_D12_GPIO_Port GPIOB
#define LCD_D13_Pin GPIO_PIN_13
#define LCD_D13_GPIO_Port GPIOB
#define LCD_D14_Pin GPIO_PIN_14
#define LCD_D14_GPIO_Port GPIOB
#define LCD_D15_Pin GPIO_PIN_15
#define LCD_D15_GPIO_Port GPIOB
#define LCD_CS_Pin GPIO_PIN_6
#define LCD_CS_GPIO_Port GPIOC
#define LCD_RS_Pin GPIO_PIN_7
#define LCD_RS_GPIO_Port GPIOC
#define BUTTON_1_Pin GPIO_PIN_8
#define BUTTON_1_GPIO_Port GPIOC
#define BUTTON_2_Pin GPIO_PIN_9
#define BUTTON_2_GPIO_Port GPIOC
#define GPIO18_Pin GPIO_PIN_8
#define GPIO18_GPIO_Port GPIOA
#define UART1_TX_Pin GPIO_PIN_9
#define UART1_TX_GPIO_Port GPIOA
#define UART1_RX_Pin GPIO_PIN_10
#define UART1_RX_GPIO_Port GPIOA
#define CAN_RX_Pin GPIO_PIN_11
#define CAN_RX_GPIO_Port GPIOA
#define CAN_TX_Pin GPIO_PIN_12
#define CAN_TX_GPIO_Port GPIOA
#define GPIO4_Pin GPIO_PIN_15
#define GPIO4_GPIO_Port GPIOA
#define BUTTON_3_Pin GPIO_PIN_10
#define BUTTON_3_GPIO_Port GPIOC
#define BUTTON_4_Pin GPIO_PIN_11
#define BUTTON_4_GPIO_Port GPIOC
#define BUTTON_5_Pin GPIO_PIN_12
#define BUTTON_5_GPIO_Port GPIOC
#define LCD_D3_Pin GPIO_PIN_3
#define LCD_D3_GPIO_Port GPIOB
#define LCD_D4_Pin GPIO_PIN_4
#define LCD_D4_GPIO_Port GPIOB
#define LCD_D5_Pin GPIO_PIN_5
#define LCD_D5_GPIO_Port GPIOB
#define LCD_D6_Pin GPIO_PIN_6
#define LCD_D6_GPIO_Port GPIOB
#define LCD_D7_Pin GPIO_PIN_7
#define LCD_D7_GPIO_Port GPIOB
#define LCD_D8_Pin GPIO_PIN_8
#define LCD_D8_GPIO_Port GPIOB
#define LCD_D9_Pin GPIO_PIN_9
#define LCD_D9_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
