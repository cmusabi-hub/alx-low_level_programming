#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: integer
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *num;

	num = malloc(sizeof(unsigned int) * 1);

	if (num == NULL)
		exit (98);
	*num = b;
	return (num);
}

