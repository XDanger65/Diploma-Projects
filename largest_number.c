/*
 ============================================================================
 Name        : largest_number.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float  a ,b,c;
	printf("enter 3 numbers \n");
	fflush(stdout);
	scanf("%f%f%f",&a,&b,&c);
	if (a>b)
	{
		if (a>c)
			{
				printf("the largest number is %f",a);

			}
			else {
				printf("the largest number is %f",c);

			}


	}else
	{
		printf("the largest number is %f",b);
	}
	return EXIT_SUCCESS;
}
