/*
 ============================================================================
 Name        : LIFO_buff.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include "LIFO_buff.h"
#include "stdio.h"


LIFO_status LIFO_Add_item (LIFO_Buf_t* lifo_buf , element_type item)
{
	// check lifo is valid
	if(!lifo_buf->base || !lifo_buf->head)
		return LIFO_Null;

	// check lifo is full ?
	if (lifo_buf->count == lifo_buf->length)
		return LIFO_full;

	// add item
	*(lifo_buf->head) = item;
	lifo_buf->head++;
	lifo_buf->count++;

	return LIFO_no_error;
}
LIFO_status LIFO_get_item (LIFO_Buf_t* lifo_buf , element_type* item)
{
	// check lifo is valid
	if (!lifo_buf->base || !lifo_buf->head)
		return LIFO_Null;

	// check lifo is empty
	if (lifo_buf->count == 0)
		return LIFO_empty;

	// get the item
	lifo_buf->head --;
	*item = *(lifo_buf->head);
	lifo_buf->count --;

	return LIFO_no_error;
}
LIFO_status LIFO_init (LIFO_Buf_t* lifo_buf , element_type* buf,unsigned length)
{
	if(buf == NULL)
		return LIFO_Null;
	lifo_buf->base = buf;
	lifo_buf->head = buf;
	lifo_buf->length = length;
	lifo_buf->count = 0;

	return LIFO_no_error;
}

