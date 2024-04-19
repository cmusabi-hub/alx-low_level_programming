#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: sum of the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int index, result;

	for (index = 0; s1[index] && s2[index]; index++)
	{
		result =  (s1[index] - s2[index]);
		if (result != 0)
			return (result);
	}
	return (0);
}

