#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: integer
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *num;
	num = malloc(b);

	if (num == NULL)
		exit (98);
	return (num);
}

