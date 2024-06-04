#include "function_pointers.h"
/**
 * array_iterator - executes function given as parameter on each element
 * @size: size of array
 * @array: array tested
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t iter;

	if (array && size)
	{
		for (iter = 0; iter < size; iter++)
		{
			action(array[iter]);
		}
	}
}

