#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to be allocated.
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *data_type = malloc(b);

	if (data_type == NULL)
		exit(98);
	return (data_type);
}
