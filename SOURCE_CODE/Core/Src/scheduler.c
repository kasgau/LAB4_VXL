/*
 * scheduler.c
 *
 *  Created on: Nov 9, 2024
 *      Author: kanza
 */


#include "scheduler.h"

sTask SCH_tasks_G[SCH_MAX_TASKS];
uint8_t current_index_task =0;

void SCH_Init(void)
{
//  unsigned char i ;
//  for (i = 0; i <SCH_MAX_TASKS; i++)
//  {
//	  SCH_Delete_Task(i);
//  }
//  // Reset the global error variable
//  // − SCH_Delete_Task() will generate an error code,
//  // (because the task array is empty)
//  Timer_init();
//  Watchdog_init();
}

uint8_t SCH_Add_Task(void (*pFunction) () ,  uint32_t DELAY, uint32_t  PERIOD)
{
	uint32_t Index;
	DELAY = DELAY / Tick;
	PERIOD = PERIOD / Tick;


 // First find a gap in the array (if there is one)
	while ((SCH_tasks_G[Index].pTask != 0) && (Index < SCH_MAX_TASKS)) {
	        Index++;
	    }

	    if (Index == SCH_MAX_TASKS) {
//	        Error_code_G = ERROR_SCH_TOO_MANY_TASKS;
	        return SCH_MAX_TASKS;
	    }

	    SCH_tasks_G[Index].pTask = pFunction;
	    SCH_tasks_G[Index].Delay = DELAY;
	    SCH_tasks_G[Index].Period = PERIOD;
	    SCH_tasks_G[Index].RunMe = 0;

	    return Index;

//  SCH_tasks_G[Index].TaskID =Index;

//  if(current_index_task < SCH_MAX_TASKS)
//  {
//	   SCH_tasks_G[current_index_task].pTask = pFunction;
//	   SCH_tasks_G[current_index_task].Delay = DELAY;
//	   SCH_tasks_G[current_index_task].Period = PERIOD;
//	   SCH_tasks_G[current_index_task].RunMe = 0;
//
//	   SCH_tasks_G[current_index_task].TaskID =current_index_task;
//	   current_index_task ++;
//  }
}

void SCH_Update(void)
{
//	for(Index =0; Index < SCH_Update; Index++)
//	{
//		if(SCH_tasks_G[Index].Delay > 0){
//			SCH_tasks_G[Index].Delay --;
//		}
//		else
//		{
//			SCH_tasks_G[Index].Delay = SCH_tasks_G[Index].Period;
//			SCH_tasks_G[Index].RunMe += 1;
//		}
//	}

	 for (uint8_t Index = 0; Index < SCH_MAX_TASKS; Index++) {
	        if (SCH_tasks_G[Index].pTask)
	        {
	            if (SCH_tasks_G[Index].Delay == 0)
	            {
	                SCH_tasks_G[Index].RunMe += 1;
	                if (SCH_tasks_G[Index].Period)
	                {
	                    SCH_tasks_G[Index].Delay = SCH_tasks_G[Index].Period;
	                }
	            }
	            else
	            {
	                SCH_tasks_G[Index].Delay -= 1;
	            }
	        }
	    }

}

void SCH_Dispatch_Tasks(void)
{
	 for (uint8_t Index = 0; Index < SCH_MAX_TASKS; Index++)
	 {
	        if (SCH_tasks_G[Index].RunMe > 0)
	        {
	            (*SCH_tasks_G[Index].pTask)();
	            SCH_tasks_G[Index].RunMe -= 1;

	            if (SCH_tasks_G[Index].Period == 0)
	            {
	                SCH_Delete_Task(Index);
	            }
	        }
	    }
}

void SCH_Delete_Task(uint8_t TASK_INDEX)
{

    SCH_tasks_G[TASK_INDEX].pTask = 0;
    SCH_tasks_G[TASK_INDEX].Delay = 0;
    SCH_tasks_G[TASK_INDEX].Period = 0;
    SCH_tasks_G[TASK_INDEX].RunMe = 0;

}
