#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: elements to be allocated memory
 * @size: size in bytes of the elements
 * Return: pointer to the location of memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr_array;
	unsigned int iter;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr_array = malloc(nmemb * size);

	if (ptr_array == NULL)
		return (NULL);

	for (iter = 0; iter < nmemb; iter++)
	{
		ptr_array[iter] = iter;
	}
	return (ptr_array);
}

