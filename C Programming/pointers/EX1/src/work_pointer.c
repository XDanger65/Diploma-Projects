/*
 ============================================================================
 Name        : work_pointer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m = 29;
	int* ab ;
	ab = &m ;
	printf("address of m : %p\n",&m);
	printf("value of m : %d\n",m);
	printf("Now ab is assigned with the address of m:\n");
	printf("Address of pointer ab :%p\n",ab);
	printf("Content of pointer ab :%d\n",*ab);
	m = 34;
	printf("The value of m assigned to 34 now.\n");
	printf("Address of pointer ab :%p\n",ab);
	printf("Content of pointer ab :%d\n",*ab);
	*ab = 7;
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	printf("address of m : %p\n",&m);
	printf("value of m : %d\n",m);
	return 0;
}
