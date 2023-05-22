#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - searches a string for any of a set bytes
 * @s: initial string
 * @accept: string tested
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *point;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				point = &s[i];
				return (point);
			}
		}
	}
	return (0);
}

