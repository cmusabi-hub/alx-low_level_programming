#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars and initializes it with a specific char
 * @size: size of characters
 * @c: character to be initialized
 *
 * Return: NULL if size is 0, pointer to the array of NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size > 0)
	{
		for (i = 0; i < size; i++)
			_putchar(c);
	}
	return (0);
}
