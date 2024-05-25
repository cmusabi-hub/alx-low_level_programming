#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size in bytes of the allocated space of ptr
 * @new_size: new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_int;
	unsigned int iter, size = old_size > new_size ? old_size : new_size;
	ptr_int = malloc(sizeof(new_size));

	if (ptr_int == NULL)
	{
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL )
	{
		return malloc(new_size);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr != NULL)
	{
		for (iter = 0; iter < size; iter++)
			(char *) ptr_int[iter] = (char *) ptr[iter];
		free(ptr);
	}
	return (ptr_int);
}

