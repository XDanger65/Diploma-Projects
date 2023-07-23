/*
 ============================================================================
 Name        : ASCII.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	printf("enter a character \n");
	fflush(stdout);
	scanf("%c",&x);
	printf("the ASCII value of %c is %d ",x,x);
	return EXIT_SUCCESS;
}
