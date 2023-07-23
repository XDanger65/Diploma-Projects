#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i =0;
    char arr[100];
    printf("enter the string :");
    gets(arr);
    for(i =0; arr[i]!='\0';i++);
    printf("length of string is :%d",i);
    return 0;
}
