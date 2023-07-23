/*
 ============================================================================
 Name        : searching_in_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num,i,element=0;
    int arr[20];
    printf("enter the no of elements :\n");
    scanf("%d",&num);
    printf("enter the elements \n");
    for(i=0;i <num;i++)
    {
         scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched :\n");
    scanf("%d",element);
    i=0;
    while(i<num &&element !=arr[i])
    {
        i++;
    }
        if (i<num)
        {
            printf("element found at the location = %d",i+1);

        }
        else{
            printf("not found \n");
        }

	return EXIT_SUCCESS;
}
