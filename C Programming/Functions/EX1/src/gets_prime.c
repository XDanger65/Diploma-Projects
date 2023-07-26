/*
 ==============================================================================
 Name        : gets_prime.c
 Author      : Eslam Mostafa Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : gets_prime in C, Ansi-style
 ==============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int get_prime(int x)  //check if x is prime
{
	int j , flag =0;
	for(j=2; j<=x/2;j++)
	{
		if (x%j == 0)
		{
			flag =1;
			break;
		}
	}
	return flag;

}
int main(void) {

	int n1, n2 ,i ,flag;
	printf("enter the two numbers \n");
	fflush(stdout);
	scanf("%d%d",&n1,&n2);
	printf("prime numbers between %d and %d are : ",n1,n2);
	for(i=n1+1; i<n2;i++)
	{
		flag = get_prime(i);
		if (flag ==0)
			printf("%d  ",i);
	}



	return EXIT_SUCCESS;
}
