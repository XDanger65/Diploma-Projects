#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,element;
    int arr[20];
    printf("enter the no of elements :\n");
    scanf("%d",&num);
    printf("enter the elements \n");
    for(i=0;i <num;i++)
    {
         scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched :\n");
    scanf("%d",element);

    //i=0;
    for(i=0;i<num;i++)
    {
         if(element==arr[i])
    {

            printf("element found at the location = %d",i+1);

        }
    }



    return 0;
}
