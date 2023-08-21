#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be tested
 * @size: size of the array
 * @cmp: function pointer
 * Return: index of first element which cmp does not return 0
 * if no element matches return -1
 * size <= 0 returns -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if(array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (; index < size; index++)
		{
			if (cmp(array[index]))
				return (index);
		}
	}
	return(-1);
}

