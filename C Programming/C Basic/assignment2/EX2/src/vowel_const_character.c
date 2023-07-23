/*
 ============================================================================
 Name        : vowel_const_character.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x ;
	printf("enter a character \n");
	fflush(stdout);
	scanf("%c",&x);
	if (x == 'a' ||x == 'A' ||x == 'i' ||x == 'I' ||x == 'u' ||x == 'U' ||x == 'e' ||x == 'E' ||x == 'o' ||x == 'O')
	{
		printf(" %c is vowel\n",x);

	}else
	{
		printf(" %c is constant\n",x);
	}
	return EXIT_SUCCESS;
}
