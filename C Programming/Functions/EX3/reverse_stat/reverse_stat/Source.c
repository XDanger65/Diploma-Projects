#include <stdio.h>

void rev()
{
	char c; 
	scanf_s("%c", &c);
	if (c != '\n')
	{
		rev();
		printf("%c", c);
	}
}
int main()
{
	printf("enter a sentence: ");
	rev();



	return 0;
}