/*
 ============================================================================
 Name        : pointer_to_array.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct emp
{
	char* name ;
	int id ;
};
int main(void) {

	static struct emp emp1 = {"eslam",100},emp2 = {"mido",101},emp3 = {"moo",102};
	struct emp(*arr[]) = {&emp1,&emp2,&emp3};
	struct emp(*(*pt)[3]) = &arr;
	printf("employee name is %s \n",(**(*pt+1)).name);
	printf("employee id is %d \n",(*(*pt+1))->id);


	return EXIT_SUCCESS;
}
