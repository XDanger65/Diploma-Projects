/*
 ============================================================================
 Name        : sum_of_2numbers.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1 ,num2;
	printf("enter two integers :\n");
	fflush(stdout);
	scanf("%d%d", &num1,&num2);
	printf("the sum is : %d", num1 +num2);
	return EXIT_SUCCESS;
}
