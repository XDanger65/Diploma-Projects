/*
 ============================================================================
 Name        : Alphabets_pointer.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char arr[27];
	char *ptr;
	ptr = arr;// ptr points to the first element in the empty array
	for(int i = 0 ; i<26; i++)
	{
		*ptr= i+'A';
		ptr++;
	}
	ptr = arr; // ptr points again to the first element in the array
	printf("the alphabets are : \n");
	for (int i=0; i<26;i++)
	{
		printf("   %c",*ptr);
		ptr++;
	}
	return EXIT_SUCCESS;
}
