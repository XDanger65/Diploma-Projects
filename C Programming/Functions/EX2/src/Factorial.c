/*
 ============================================================================
 Name        : Factorial.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Factorial in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fac(int x)
{

	if (x!=1)
	return x*fac(x-1) ;
}
int main(void) {
	int num;
	printf("enter a number : \n");
	fflush(stdout);
	scanf("%d",&num);
	printf ("the factorial of %d = %d",num,fac(num));
	return EXIT_SUCCESS;
}
