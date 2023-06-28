#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to the newly created array or NULL if fail
 */

int *array_range(int min, int max)
{
	int len, *arr, i;
	len = max - min + 1;
	arr = malloc(sizeof(int) * len);
	
	if (arr == NULL)
		return (NULL);
	if (min > max)
		return (NULL);
	for (i = 0; i < len; i++)
		arr[i] = min++;
	return (arr);
}

