
/*
 * FIFO.h
 *
 *  Created on: Sep 17, 2023
 *      Author: eslam
 */

#ifndef FIFO_H_
#define FIFO_H_
#include "stdlib.h"
#include "stdint.h"
#include "stdio.h"
// USER Configuration
// select the type of the fifo (unit8_t , uint16_t,.....)
#define element_type  uint8_t
// create the fifo
#define width1 5
element_type Uart_buffer[width1];


// type definition
typedef struct {
    unsigned int length;
    unsigned int count;
    element_type* base;
    element_type* head;
    element_type* tail;
}FIFO_Buf_t;

typedef enum {
    FIFO_no_error,
    FIFO_Full,
    FIFO_Empty,
    FIFO_Null
}FIFO_Buf_Status;


// APIs
FIFO_Buf_Status FIFO_init (FIFO_Buf_t* fifo,element_type* buf , uint32_t length);
FIFO_Buf_Status FIFO_Enqueue (FIFO_Buf_t* fifo,element_type item);
FIFO_Buf_Status FIFO_Dequeue (FIFO_Buf_t* fifo,element_type* item);
FIFO_Buf_Status FIFO_IS_Full (FIFO_Buf_t* fifo);
void FIFO_Print (FIFO_Buf_t* fifo);

#endif /* FIFO_H_ */

