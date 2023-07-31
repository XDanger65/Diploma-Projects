/*
 ============================================================================
 Name        : program.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
union job {        // size = 32 the max
	char name[32];
	float salary;
	int worker_no;


}u;
struct job1{    // size = 32 +4+4 = 40
	char name[32];
	float salary;
	int worker_no;
}s;
int main(void) {
	printf("size of union = %d",sizeof(u));
	printf("\nsize of structure = %d",sizeof(s));
	return EXIT_SUCCESS;
}
