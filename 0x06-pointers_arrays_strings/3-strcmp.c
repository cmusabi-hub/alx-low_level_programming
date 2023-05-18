#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: value 0 if same
 */

int _strcmp(char *s1, char *s2)
{
	int sub, rsub = 0, index;

	for (index = 0; s1[index] && s2[index]; index++)
	{
		sub = s1[index] - s2[index];
		rsub += sub;
	}
	return (rsub);
}

