#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Null on failure or concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t i, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		result[len1 + i] = s2[i];
	}
	result[len1 + i] = '\0';
	return (result);
}

