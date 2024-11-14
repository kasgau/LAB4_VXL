/*
 * global.h
 *
 *  Created on: Nov 14, 2024
 *      Author: kanza
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#include"main.h"
#include "stdint.h"
#include "TASK.h"
#include "input_processing.h"
#include "input_reading.h"
#include "scheduler.h"


#define No_OF_BUTTON 3
#define BUTTON_IS_PRESSED GPIO_PIN_RESET
#define BUTTON_IS_RELEASED GPIO_PIN_SET



enum ButtonState {PRESSED, RELEASED};
extern int buttonIsPressedAndReleased[No_OF_BUTTON];

#endif /* INC_GLOBAL_H_ */
