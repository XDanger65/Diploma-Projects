/*
 ============================================================================
 Name        : simple_calc.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : simple_calc in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	float num1 , num2;
	printf("enter the operator + or - or * or / \n ");
	fflush (stdout);
	scanf("%c",&x);
	printf("enter the two operands \n ");
	fflush (stdout);
	scanf("%f %f",&num1,&num2);
	switch (x)
	{
	case '+' :
		printf("%f %c %f = %f",num1,x,num2,num1 +num2);
		break;
	case '-' :
		printf("%f %c %f = %f",num1,x,num2,num1 -num2);
		break;
	case '*' :
		printf("%f %c %f = %f",num1,x,num2,num1 *num2);
		break;
	case '/' :
		printf("%f %c %f = %f",num1,x,num2,num1 /num2);
		break;
	}
	return EXIT_SUCCESS;
}
