/*
 * LIFO_buff.h
 *
 *  Created on: Sep 12, 2023
 *      Author: eslam
 */

#ifndef LIFO_BUFF_H_
#define LIFO_BUFF_H_
#include "stdlib.h"
#include "stdint.h"
//type definitions
#define width 5
#define element_type uint8_t
element_type buffer1[width];


typedef struct {
	unsigned int length;
	unsigned int count;
	element_type* base;
	element_type* head;
}LIFO_Buf_t;

typedef enum {
	LIFO_no_error, // zero
	LIFO_full,    // one
	LIFO_empty,  // two
	LIFO_Null   // three
}LIFO_status;

//APIs
LIFO_status LIFO_Add_item (LIFO_Buf_t* lifo_buf , element_type item);
LIFO_status LIFO_get_item (LIFO_Buf_t* lifo_buf , element_type* item);
LIFO_status LIFO_init (LIFO_Buf_t* lifo_buf , element_type* buf,unsigned length);

#endif /* LIFO_BUFF_H_ */

