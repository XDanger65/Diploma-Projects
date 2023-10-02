/*
 * main.c
 *
 *  Created on: Sep 17, 2023
 *      Author: eslam
 */
#include "fifo.h"

int main(void) {

    FIFO_Buf_t FIFO_UART;
    element_type i , temp = 0;
    if(FIFO_init(&FIFO_UART,Uart_buffer,5) == FIFO_no_error)
        printf("FIFO init ------------ done\n");
    for(i = 0 ; i < 7; i++)
    {
        printf(" FIFO Enqueue (%x).\n",i);
        if(FIFO_Enqueue(&FIFO_UART,i) == FIFO_no_error)
            printf("\t FIFO Enqueue is---------done \n");
        else
            printf("\t FIFO Enqueue is---------failed \n");

    }
    FIFO_Print(&FIFO_UART);
    if(FIFO_Dequeue(&FIFO_UART,&temp) == FIFO_no_error)
            printf("FIFO Dequeue %x -------done \n",temp);
    if(FIFO_Dequeue(&FIFO_UART,&temp) == FIFO_no_error)
            printf("FIFO Dequeue %x -------done \n",temp);
    FIFO_Print(&FIFO_UART);
	return EXIT_SUCCESS;
}


