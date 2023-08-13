/*
 ============================================================================
 Name        : Rev_num_pointer.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=30,*y,*z;
	y=&x;
	z=y;
	*y++=*z++;
	x++;
	printf("x= %d , y=%d , z=%d ",x,y,z);

	return EXIT_SUCCESS;
}
