#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: old size of bytes of the allocated pace for ptr
 * @new_size: new size in bytes of the new memory block
 *
 * Return: if new_size == old_size - ptr
 * if new_size == 0 and ptr is not NULL - NULL
 * Otherwise - a pointer to the reallocated memory block
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *filter;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);
		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filter = mem;

	for (index = 0; index < old_size && index < new_size; index++)
		filter[index] = *ptr_copy++;

	free(ptr);
	return (mem);
}
