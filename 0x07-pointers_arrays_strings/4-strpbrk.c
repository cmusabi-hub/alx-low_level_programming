#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string referred
 * @accept: bytes tested
 * Return: pointer to the byte in s that matches to the bytes in accept or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + 1);
	}
	return ('\0');
}
