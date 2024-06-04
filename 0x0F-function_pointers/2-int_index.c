#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of an integer
 * @size: size of the integer
 * @cmp: function pointer
 * Return: -1 if no element matches and if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int iter;
	
	if(array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (iter = 0; iter < size; iter++)
		{
			if (cmp(array[iter]))
				return (iter);
		}
	}
	return (-1);
}

