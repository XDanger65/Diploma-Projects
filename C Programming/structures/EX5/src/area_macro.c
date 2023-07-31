/*
 ============================================================================
 Name        : area_macro.c
 Author      : Eslam Mostaf Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
#define area(r)(PI*r*r)
int main(void) {
	float redius , area;
	printf("enter the redius : ");
	fflush(stdout);
	scanf("%f",&redius);
	area = area(redius);
	printf("the area is %f ",area);
	return EXIT_SUCCESS;
}
