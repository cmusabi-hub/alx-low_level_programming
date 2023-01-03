#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to be concanated to
 * @s2: string to be added to s1
 * Return: return concanated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *_string;
	int index_a, index_b = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index_a =  0; s1[index_a] || s2[index_a]; index_a++)
	{
		len++;
	}

	_string = malloc(sizeof(char) * len);

	if (_string == NULL)
		return (NULL);

	for (index_a = 0; s1[index_a]; index_a++)
	{
		_string[index_b] = s1[index_a];
	}
	
	for (index_a = 0; s2[index_a]; index_a++)
	{
		_string[index_b] = s2[index_a];
	}

	return (_string);
}
