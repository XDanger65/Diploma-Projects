/*
 ============================================================================
 Name        : checking_alphabet.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : checking_alphabet in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c ;
	printf("enter a character\n");
	fflush(stdout);
	scanf("%c",&c);
	if ((c >= 'a' && c <='z')||(c >= 'A' && c <='Z'))
	{
		printf("%c is an alphabet \n",c);
	}
	else
	{
		printf("%c is not an alphabet \n",c);
	}
	return EXIT_SUCCESS;
}
