/*
 ============================================================================
 Name        : factorial_number.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : factorial_number in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num ,fact = 1;
	printf("enter an integer \n");
	fflush(stdout);
	scanf("%d",&num);
	if (num <= 0)
	{
		printf("there is not a factorial for this number \n");
	}
	else
	{
		for (int i =1; i <= num ; i++)
		{
			fact *= i;
		}
		printf ("the factorial of the %d is %d",num ,fact);
	}
	return EXIT_SUCCESS;
}
