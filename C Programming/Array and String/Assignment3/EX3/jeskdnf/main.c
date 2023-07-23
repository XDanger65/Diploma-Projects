#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c;
	int arr[50][50];
	int trans[50][50];
	printf("enter the rows and columns \n");
	fflush(stdout);fflush(stdin);
	scanf("%d%d",&r,&c);
	printf("enter the elements of matrix :\n");
	for (int i = 0; i<r;i++)
	{
		for(int j =0;j<c; j++)
		{
			printf("enter elements a%d%d:",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("entered matrix is :\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d\t",arr[i][j]);
			if(j==c-1)
				printf("\n\n");
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			trans[j][i]=arr[i][j];
		}
	}
	printf("transposed matrix is :\n");
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%d\t",trans[i][j]);
			if(j==r-1)
				printf("\n\n");
		}
	}

    return 0;
}
