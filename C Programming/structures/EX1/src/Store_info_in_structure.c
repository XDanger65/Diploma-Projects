/*
 ============================================================================
 Name        : Store_info_in_structure.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct Sstudent {
	char name[10];
	int roll;
	float mark;

};
int main(void) {
	struct Sstudent man ;
	printf("enter the data of  the student: \n ");
	printf("enter the name: ");
	fflush(stdout);
	scanf("%s",&man.name]);
	printf("enter the roll number: ");
	fflush(stdout);
	scanf("%d",&man.roll);
	printf("enter the mark:  ");
	fflush(stdout);
	scanf("%f",&man.mark);
	printf("the information is :\n");
	printf("the name is :%s \n the roll number is :%d \n the mark is :%f :",man.name,man.roll,man.mark);
	return EXIT_SUCCESS;
}
