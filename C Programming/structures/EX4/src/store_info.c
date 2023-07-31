/*
 ============================================================================
 Name        : store_info.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct Sstudent {
	char name[30];
	int roll;
	float mark;

};
int main(void) {
	struct Sstudent s[10];
	printf("enter the info of the students :\n");
	for (int i=0;i<10;i++)
	{
		s[i].roll= i+1;
		printf("enter the info for the roll %d :\n",s[i].roll);
		printf("enter the name :");
		fflush(stdout);
		scanf("%s",s[i].name);
		printf("enter the mark :");
		fflush(stdout);
		scanf("%f",&s[i].mark);
	}
	for (int i=0;i<10;i++)
	{
		s[i].roll= i+1;
		printf("\nthe info for the roll %d :\n",s[i].roll);
		printf("\nthe name : ");
		printf("%s",s[i].name);
		printf("\nthe mark :");
		printf("%f",s[i].mark);
	}
	return EXIT_SUCCESS;
}
