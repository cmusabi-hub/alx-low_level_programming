#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns poiter to duplicated string
 * @str: pointer to the string
 * Return: NULL if fail pointer to the new memory location
 */
char *_strdup(char *str)
{
	size_t size = strlen(str), iter;
	char *char_ptr;

	if (str == NULL)
		return (NULL);
	char_ptr = malloc(sizeof(char) * size);

	if (char_ptr == NULL)
		return (NULL);
	for (iter = 0; iter < size; iter++)
	{
		char_ptr[iter] = str[iter];
	}
	char_ptr[iter] = '\0';
	return (char_ptr);
}

