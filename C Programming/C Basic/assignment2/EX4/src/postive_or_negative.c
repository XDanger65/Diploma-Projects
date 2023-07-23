/*
 ============================================================================
 Name        : postive_or_negative.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num ;
	printf("enter a number \n");
	fflush(stdout);
	scanf("%f",&num);
	if (num > 0)
	{
		printf("the number %f is a positive\n",num);
	}
	else if (num < 0)
		{
			printf("the number %f is a negative\n",num);
		}
	else {
		printf("the number %f is a zero\n",num);
	}
	return EXIT_SUCCESS;
}
