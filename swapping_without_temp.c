/*
 ============================================================================
 Name        : swapping_without_temp.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a , b ;
	printf("enter the value of a : \n");
	fflush(stdout);
	scanf("%f",&a);
	printf("enter the value of b : \n");
	fflush(stdout);
	scanf("%f",&b);
	printf("after swapping value of a is : %f \nvalue of b is : %f",b,a);
	return EXIT_SUCCESS;
}
