#include "function_pointers.h"
/**
 * array_iterator - executes function given as parameter on each element
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t iter;

	for (iter = 0; iter < size; iter++)
	{
		action(array[iter]);
	}
}

