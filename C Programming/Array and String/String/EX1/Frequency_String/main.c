#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int counter = 0;
    char character;
    char arr[100];
    printf("enter a string :");
    gets(arr);
    printf("enter a character to find frequency::");
    scanf("%c",&character);
    for(int i=0;i<strlen(arr);i++)
    {
        if(character == arr[i])
        counter++;
    }
    printf("frequency of %c = %d",character,counter);

    return 0;
}
