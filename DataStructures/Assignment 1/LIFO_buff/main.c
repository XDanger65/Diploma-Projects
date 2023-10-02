/*
 * main.c
 *
 *  Created on: Sep 12, 2023
 *      Author: eslam
 */

#include "LIFO_buff.h"

int main(void) {

	element_type i , temp = 0 ;
	LIFO_Buf_t uart_lifo , I2C_lifo;

	// static allocation
	LIFO_init(&uart_lifo, buffer1 , 5);

	// dynamic allocation
	element_type* buffer2 = (element_type*)malloc(5*sizeof(unsigned int));
	LIFO_init(&I2C_lifo, buffer2 , 5);
	printf("========LIFO ADD========\n");
	for(i = 0 ; i < 8; i++)
	{
		if(LIFO_Add_item(&uart_lifo ,i) == LIFO_no_error)
			printf("UART_LIFO add: %d \n",i);
	}
	printf("=========LIFO GET==========\n");
	for (i=0 ;i<8;i++)
	{
		if(LIFO_get_item(&uart_lifo,&temp)==LIFO_no_error)
			printf("UART_LIFO get: %d \n",temp);
	}



	return EXIT_SUCCESS;
}


