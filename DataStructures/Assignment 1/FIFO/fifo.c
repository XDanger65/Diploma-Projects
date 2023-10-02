/*
 ============================================================================
 Name        : FIFO_buff.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */
#include "fifo.h"
FIFO_Buf_Status FIFO_init (FIFO_Buf_t* fifo,element_type* buf , unsigned int length)
{
    // check is vaild
    if(buf == NULL )
        return FIFO_Null;
    fifo->base = buf ;
    fifo->head = fifo->base ;
    fifo->tail = fifo->base ;
    fifo->length = length ;
    fifo->count = 0 ;
    return FIFO_no_error;
}
FIFO_Buf_Status FIFO_Enqueue (FIFO_Buf_t* fifo,element_type item)
{
    // fifo is valid
    if (!fifo->head || !fifo->base ||!fifo->tail )
        return FIFO_Null;
    // fifo is full
    if (FIFO_IS_Full(fifo) == FIFO_Full)
        return FIFO_Full;

    *(fifo->head) == item;
    fifo->count++;
    if (fifo->head == (fifo->base + (fifo->length*sizeof(element_type))))
        fifo->head = fifo->base;
    else
        fifo->head++;
    return FIFO_no_error;

}
FIFO_Buf_Status FIFO_Dequeue (FIFO_Buf_t* fifo,element_type* item)
{
     // fifo is valid
    if (!fifo->head || !fifo->base ||!fifo->tail )
        return FIFO_Null;
    // fifo is empty
    if (fifo->count == 0)
        return FIFO_Empty;
    *item = *(fifo->tail) ;
    fifo->count--;
    if (fifo->tail == (fifo->base + (fifo->length*sizeof(element_type))))
        fifo->tail = fifo->base;
    else
        fifo->tail++;
    return FIFO_no_error;


}
FIFO_Buf_Status FIFO_IS_Full (FIFO_Buf_t* fifo)
{
    // fifo is valid
    if (!fifo->head || !fifo->base ||!fifo->tail )
        return FIFO_Null;
    if(fifo->count == fifo->length)
        return FIFO_Full;
    return FIFO_no_error;
}
void FIFO_Print (FIFO_Buf_t* fifo)
{
    element_type* temp;
    int i;
    if (fifo->count == 0 )
    {
                printf("fifo is empty \n");
    }
    else{
        temp = fifo->tail;
        printf("\n ======fifo_print======\n");
        for(i=0; i<fifo->count; i++)
        {
            printf("\t %x \n",*temp);
            temp++;
        }
        printf("===============\n");
    }
}


