#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc
 *@b: The number of bytes to be allocated.
 *
 *Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
    int *a;

    a = malloc(b * sizeof(int));

    if (a == NULL)
    {
    	    exit(98);
    }

	return (a);

}

