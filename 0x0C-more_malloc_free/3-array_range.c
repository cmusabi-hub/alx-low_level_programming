#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to created array
 * NULL if min > max and malloc fails
 */

int *array_range(int min, int max)
{
	int i, *array, len, string;

	if (min > max)
		return(NULL);
	for (i = min; i <= max; i++)
		len++;

	array = malloc(sizeof(int) * (len + 1));

	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		array[i] = string;
	return (string);
}
