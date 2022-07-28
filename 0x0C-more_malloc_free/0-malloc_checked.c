#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc
 *
 *@b: The number of bytes to be allocated.
 *
 *Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}

