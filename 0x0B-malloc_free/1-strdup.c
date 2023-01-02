#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string pointer to the characters to be returned.
 *
 * Return: *str pointer, NULL if str is NULL and if issuficient memory
 */

char *_strdup(char *str)
{
	char *array;
	int i, len;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		len++;
	}

	array = malloc(sizeof(char) * len);

	if (array == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';
	return (array);
}
