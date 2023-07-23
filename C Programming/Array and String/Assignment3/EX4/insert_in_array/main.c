#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[20],i,num,element,location;
    printf("enter the number of elements of the array\n");
    scanf("%d",&num);
    printf("enter the elements \n");
    for(i = 0 ; i <num ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be added\n");
    scanf("%d",&element);
    printf("enter the location\n");
    scanf("%d",&location);
    for(i =num; i >=location;i--)
    {
        arr[i]=arr[i-1];
    }
    num++;
    arr[location-1] = element;
    printf("the array after adding\n");
    for (i =0; i<num ; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
