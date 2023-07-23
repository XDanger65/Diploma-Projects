/*
 ============================================================================
 Name        : input_and_output.c
 Author      : ESLAM MOSTAFA MOHAMED
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num ;
	printf("enter an integer \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("the entered number is : %d",num);
	return EXIT_SUCCESS;
}
