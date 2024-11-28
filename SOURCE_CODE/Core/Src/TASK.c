/*
 * TASK.c
 *
 *  Created on: Nov 10, 2024
 *      Author: kanza
 */


#include "TASK.h"

void Led_red()
{
	HAL_GPIO_TogglePin(GPIOA, LED_RED_Pin);
}

void Led_yellow()
{
	HAL_GPIO_TogglePin(GPIOA, LED_YELLOW_Pin);
}

void Led_blue()
{
	HAL_GPIO_TogglePin(GPIOA, LED_BLUE_Pin);
}

void Led_green()
{
	HAL_GPIO_TogglePin(GPIOA, LED_GREEN_Pin);
}

void Led_orange()
{
	HAL_GPIO_TogglePin(GPIOB, LED_ORANGE_Pin);
}

void off_all()
{
	HAL_GPIO_WritePin(GPIOA, LED_RED_Pin,SET);
	HAL_GPIO_WritePin(GPIOA, LED_BLUE_Pin,SET);
	HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin,SET);
	HAL_GPIO_WritePin(GPIOA, LED_ORANGE_Pin,SET);






}
