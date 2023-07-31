/*
 ============================================================================
 Name        : complex_number.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct complex{

	float real;
	float img;
}complex;
complex addcomplex(complex n1 ,complex n2)
{
	complex temp ;
	temp.real=n1.real+n2.real;
	temp.img= n1.img+n2.img;
	return temp;

}
int main(void) {
	complex n1,n2,temp;
	printf("enter the number 1 :\n ");
	printf("enter the real number : ");
	fflush(stdout);
	scanf("%f",&n1.real);
	printf("enter the img number : ");
	fflush(stdout);
	scanf("%f",&n1.img);
	printf("enter the number 2 :\n ");
	printf("enter the real number : ");
	fflush(stdout);
	scanf("%f",&n2.real);
	printf("enter the img number : ");
	fflush(stdout);
	scanf("%f",&n2.img);
	temp = addcomplex(n1,n2);
	printf("the result is : %f + %f i",temp.real,temp.img);

	return EXIT_SUCCESS;
}
