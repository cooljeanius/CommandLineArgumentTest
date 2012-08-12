/*
 * Header
 *
 */

#include <stdio.h>

int main(int argc, char ** argv)
{
    printf("You have typed %d arguments for your program.\n They are: \n \n", argc);
    int i = 0;
    while(i < argc)
    {
        printf("[%d]: %s\n", i, argv[i]);
        i++;
    }
}

// newline \n

