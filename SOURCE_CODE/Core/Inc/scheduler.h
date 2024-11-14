/*
 * scheduler.h
 *
 *  Created on: Nov 9, 2024
 *      Author: kanza
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_
#include "stdint.h"
#include "main.h"

typedef struct
{
	void (*pTask)(void);
	uint32_t Delay;
	uint32_t Period;
	uint8_t RunMe;

	uint32_t TaskID;
} sTask;

#define SCH_MAX_TASKS 10
#define NO_TASK_ID 0
#define Tick 10


void SCH_Init(void);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
uint8_t  SCH_Add_Task(void (* pFunction) () , uint32_t DELAY,uint32_t PERIOD);


#endif /* INC_SCHEDULER_H_ */
