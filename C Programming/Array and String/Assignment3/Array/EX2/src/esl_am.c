/*
 ============================================================================
 Name        : average_in_array.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : average_in_array in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n ;
	float sum=0 ,average;
	printf("enter the number of elements of the array\n");
	fflush(stdout);
	scanf("%d",&n);
	float arr[100];
	while(n<=100 || n>0){
	for (int i=0;i<n ;i++)
	{
		printf("enter the elements \n");
		fflush(stdout);
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	average = sum /n;
	printf("the average is %f",average);}
	return EXIT_SUCCESS;
}
