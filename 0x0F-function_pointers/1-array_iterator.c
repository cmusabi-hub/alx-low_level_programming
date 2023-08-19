#include "function_pointers.h"

/**
 * array_iterator - function that executes a function on
 * each element of an array
 * @array: array tested
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index = 0;
	if (array && size  && action)
	{
		for (; index < size; index++)
		{
			action(array[index]);
		}
	}
}

