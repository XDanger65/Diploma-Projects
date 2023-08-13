/*
 ============================================================================
 Name        : reverse_pointer.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	char str[100];
	char revstr[100];
	char *strptr = str;
	char *revptr = revstr;
	int i = 0;
	printf("enter the string : ");
	fflush(stdout);
	scanf("%s",str);
	while(*strptr) // make the pointer strptr point to the last char in the string
	{
		strptr++;
		i++;
	}
	while (i >= 0)
	{
		strptr--;
		*revptr = *strptr;
		revptr++;
		--i;
	}
	*revptr = '\0';
	printf("reverse of the string : %s\n",revstr);

	return EXIT_SUCCESS;
}
