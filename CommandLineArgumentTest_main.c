/*
 * Eric Gallager
 *
 * Purpose: Testing commandline arguments
 *
 */

#include <stdio.h>

int main (int	argc,	/* input - argument count (including program name) */
		  char *argv[])	/* input - argument vector */
{
    int i = 0; // Initialize loop-counter
	// insert code here...
    printf("\n argc is %i \n", argc);
	for (i = 0; i < argc; i++) // Goes through each element of argv[]
	{
		printf("\n First character of argv[%i] is %c \n", i, *argv[i]); // Prints each entry in argv[] (Warning: %c can only display one character at a time. I would use %s instead, but that caused errors the last time I tried it.)
	}
	printf("\n All arguments displayed. \n");
    return 0;
}

