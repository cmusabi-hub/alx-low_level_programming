#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: characters to be placed in the array.
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int iter;
	char *char_ptr;

	if (size == 0)
		return (NULL);
	char_ptr = malloc(sizeof(char) * size);

	if (char_ptr == NULL)
		return (NULL);

	for (iter = 0; iter < size; iter++)
	{
		char_ptr[iter] = c;
	}
	return (char_ptr);
}

