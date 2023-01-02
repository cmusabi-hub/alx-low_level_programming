#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to be concanated to
 * @s2: string to be added to s1
 * Return: return concanated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *string;
	int index1, index2 = 0, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index1 =  0; s1[index1] || s2[index2]; index1++)
		len++;
	string = malloc(sizeof(char) * len);

	if (string == NULL)
		return (NULL);

	for (index1 = 0; s1[index1]; index1++)
		string[index2] = s1[index1];

	for (index1 = 0; s2[index1]; index1++)
		string[index2] = s2[index1];

	return (string);
}
