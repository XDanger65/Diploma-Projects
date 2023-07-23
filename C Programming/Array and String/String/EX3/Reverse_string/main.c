#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char arr[100],temp;
    printf("enter the string:");
    gets(arr);
    int sizeOfArray = strlen(arr)-1,i=0;
    while(i<sizeOfArray)
    {
        temp = arr[i];
        arr[i]=arr[sizeOfArray];
        arr[sizeOfArray] = temp;
        i++;
        sizeOfArray--;
    }

        printf("reverse string is :%s",arr);
    return 0;
}
