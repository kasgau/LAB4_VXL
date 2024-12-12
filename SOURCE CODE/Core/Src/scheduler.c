/*
 * scheduler.c
 *
 *  Created on: Dec 8, 2024
 *      Author: kanza
 */

#ifndef SRC_SCHEDULER_C_
#define SRC_SCHEDULER_C_

#include "scheduler.h"
#include <stdlib.h>

TaskNode_t *head = NULL;
uint32_t globalTick = 0;

void SCH_Init(void) {
    head = NULL;
    globalTick = 0;
}

void SCH_Add_Task(void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD)
{
    TaskNode_t *newTask = (TaskNode_t *)malloc(sizeof(TaskNode_t));
    if (newTask == NULL) return;

    newTask->pTask = pFunction;
    newTask->Delay = DELAY;
    newTask->Period = PERIOD / 10;
    newTask->RunMe = 0;
    newTask->next = head;
    head = newTask;
}

void SCH_Update(void) {
    globalTick++;
}

void SCH_Dispatch_Tasks(void) {
    TaskNode_t *current = head;

    while (current != NULL)
    {
        if (current->Delay <= globalTick)
        {
            current->RunMe++;
            if (current->Period > 0)
            {
            	current->Delay = globalTick + current->Period;
            }
        }

        if (current->RunMe > 0)
        {

            (*current->pTask)();
             current->RunMe--;


            if (current->Period == 0) {

            	TaskNode_t *temp = current;

            	SCH_Delete(temp);
				continue;
            }
        }

        previous = current;
        current = current->next;
    }
}

void SCH_Delete(TaskNode_t *task) {
    if (head == NULL || task == NULL) return;

    if (head == task) {
        head = head->next;
        free(task);
        return;
    }

    TaskNode_t *current = head;
    while (current->next != NULL && current->next != task) {
        current = current->next;
    }

    if (current->next == task) {
        current->next = task->next;
        free(task);
    }
}

#endif /* SRC_SCHEDULER_C_ */
