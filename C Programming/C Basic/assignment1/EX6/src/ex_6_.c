/*
 ============================================================================
 Name        : ex_6_.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	  int x, y;
	    printf("Enter Value of x ");
	    fflush(stdout); fflush(stdin);
	    scanf("%d", &x);
	    printf("\nEnter Value of y ");
	    fflush(stdout);fflush(stdin);
	    scanf("%d", &y);

	    // Using a temporary variable to swap the values
	    // Store the value of x in a temporary variable
	    int temp = x;
	    // Assign the value of y to x
	    x = y;
	    // Assign the value stored in the temporary variable to
	    // y
	    y = temp;

	    printf("\nAfter Swapping: x = %d, y = %d", x, y);
	return EXIT_SUCCESS;
}
