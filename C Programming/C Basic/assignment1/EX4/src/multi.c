/*
 ============================================================================
 Name        : multi.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x , y;
	printf ("enter two float numnbers \n");
	fflush(stdout);
	scanf("%f%f", &x,&y);
	printf("the multi is : %f", x*y);

	return EXIT_SUCCESS;
}
