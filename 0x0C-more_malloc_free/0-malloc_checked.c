#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * Return: Always 0.
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

