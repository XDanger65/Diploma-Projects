/*
 ============================================================================
 Name        : even_and_odd.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num ;
	printf("enter an integer number \n");
	fflush(stdout);
	scanf("%d", &num );
	if (num % 2 == 0)
	{
		printf("the number %d is even \n",num);

	}else
	{
		printf("the number %d is odd \n",num);

	}

	return EXIT_SUCCESS;
}
