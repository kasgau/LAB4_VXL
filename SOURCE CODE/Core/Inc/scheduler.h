/*
 * scheduler.h
 *
 *  Created on: Dec 8, 2024
 *      Author: kanza
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include <stdint.h>

// Định nghĩa cấu trúc của một task sử dụng linked list
typedef struct TaskNode {
    void (*pTask)(void);   // Con trỏ hàm nhiệm vụ
    uint32_t Delay;        // Thời gian chờ
    uint32_t Period;       // Chu kỳ lặp lại
    uint8_t RunMe;         // Cờ thực thi
    struct TaskNode *next; // Con trỏ đến node tiếp theo
} TaskNode_t;

// Các hàm trong scheduler.c
void SCH_Init(void);
void SCH_Add_Task(void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
void SCH_Delete(TaskNode_t *task);

//typedef struct
//{
//	void (*pTask)(void);
//	uint32_t Delay;
//	uint32_t Period;
//	uint8_t RunMe;
//
//	uint32_t TaskID;
//} sTask;
//
//#define SCH_MAX_TASKS 10
//#define NO_TASK_ID 0
//#define Tick_s 10
//
//
//void SCH_Init(void);
//void SCH_Update(void);
//void SCH_Dispatch_Tasks(void);
//uint8_t  SCH_Add_Task(void (* pFunction) () , uint32_t DELAY,uint32_t PERIOD);
//sTask SCH_tasks_G[SCH_MAX_TASKS];

#endif /* INC_SCHEDULER_H_ */
