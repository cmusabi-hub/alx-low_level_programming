#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be tested against
 * @size: number of elements in the array
 * @cmp: pointer to the function used to compare
 *
 * Return: index of first element which cmp compares
 * -1 if no element matches and size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return(-1);

		for (; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
