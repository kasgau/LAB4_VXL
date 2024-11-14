/*
 * input_processing.c
 *
 *  Created on: Nov 14, 2024
 *      Author: kanza
 */


#include "input_processing.h"
enum ButtonState buttonState[No_OF_BUTTON] = { RELEASED, RELEASED, RELEASED};


void fsm_for_button_processing(void)
{

	for (int index = 0; index < No_OF_BUTTON; index++)
	{
		switch (buttonState[index])
		{
		case RELEASED:

			if (is_button_pressed(index))
			{
				HAL_GPIO_WritePin(GPIOB, LED_PINK_Pin, RESET);

				buttonState[index] = PRESSED;
			}
			break;

		case PRESSED:

			if (!is_button_pressed(index))
			{
				HAL_GPIO_WritePin(GPIOB, LED_PINK_Pin, SET);

				buttonState[index] = RELEASED;
				buttonIsPressedAndReleased[index] = 1;
			}
			break;
		}

	}

}


