/*
 ============================================================================
 Name        : sum_of_nuturalnumbers.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : sum_of_nuturalnumbers in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num ,sum =0;
	printf("enter a nutural number \n");
	fflush(stdout);
	scanf("%d",&num);
	for(int i = 1; i<=num ; i++)
	{
		sum +=i;
	}
	printf("the sum is %d",sum);
	return EXIT_SUCCESS;
}
