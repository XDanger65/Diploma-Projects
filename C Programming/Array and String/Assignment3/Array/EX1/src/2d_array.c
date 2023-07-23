/*
 ============================================================================
 Name        : 2d_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[2][2],b[2][2],c[2][2];
		int i ,j;
		printf("enter the elements of matrix 1 \n");
		for (i = 0; i <2; ++i)
		{
			for(j =0 ; j<2; ++j)
			{
				printf("enter a%d%d: ",i+1,j+1);
				fflush(stdin);fflush(stdout);
				scanf("%f",&a[i][j]);
			}
		}
		printf("enter the elements of matrix 2 \n");
		for (i = 0; i <2; ++i)
		{
			for(j =0 ; j<2; ++j)
			{
				printf("enter b%d%d: ",i+1,j+1);
				fflush(stdin);fflush(stdout);
				scanf("%f",&b[i][j]);
			}
		}
		for (i = 0; i <2; ++i)
		{
			for(j =0 ; j<2; ++j)
			{
				c[i][j]= a[i][j]+b[i][j];
			}}
		for (i = 0; i <2; ++i)
		{
			for(j =0 ; j<2; ++j)
			{
				printf("%f\t",c[i][j]);
				if(j==1)
					printf("\n");
			}}
	return EXIT_SUCCESS;
}
