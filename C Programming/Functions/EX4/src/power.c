/*
 ============================================================================
 Name        : power.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : power in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power(int base , int pow)
{
	if (pow !=0)
	{
		return (base *power(base,pow-1));
	}
	else
		return 1;

}
int main(void) {
	int base , pow;
	printf("enter the base \n");
	fflush(stdout);
	scanf("%d",&base);
	printf("enter the power \n");
	fflush(stdout);
	scanf("%d",&pow);
	printf("%d^%d = %d",base,pow,power(base,pow));
	return EXIT_SUCCESS;
}
