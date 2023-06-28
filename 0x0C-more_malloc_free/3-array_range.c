#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to the newly created array or NULL if fail
 */

int *array_range(int min, int max)
{
	int *arr = malloc(sizeof(int) * (max - min + 1)), i, j;
	
	if (arr == 0)
		return (NULL);
	if (min > max)
		return (NULL);
	for (i = min, j = 0; i < max; i++, j++)
	{
		arr[j] = i;
	}
	return (arr);
}

