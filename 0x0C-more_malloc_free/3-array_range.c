#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr_int;
	int iter, num, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;

	ptr_int = malloc(size * sizeof(int));

	if (ptr_int == NULL)
		return (NULL);

	for (iter = min, num = 0; iter <= max; iter++, num++)
		ptr_int[num] = iter;
	return (ptr_int);
}

