/*
 ============================================================================
 Name        : add_2_distance_structure.c
 Author      : Eslam  Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct distance{

	float inch,feet;

};
int main(void) {
	struct distance x,y;
	float res;
	printf("enter the info for the 1st distance :\n");
	printf("enter the inch :");
	fflush (stdout);
	scanf("%f",&x.inch);
	printf("enter the feet :");
	fflush (stdout);
	scanf("%f",&x.feet);
	printf("enter the info for the 2sd distance :\n");
	printf("enter the inch :");
	fflush (stdout);
	scanf("%f",&y.inch);
	printf("enter the feet :");
	fflush (stdout);
	scanf("%f",&y.feet);

	res = x.feet+y.feet +.083333*(x.inch+y.inch);
	printf("the distance is %f",res);

	return EXIT_SUCCESS;
}
