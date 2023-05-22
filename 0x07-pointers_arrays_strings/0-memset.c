#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @b: bytes
 * @n: number of maximum bytes
 * @s: pointer to the character
 * Return: pointer to the memory area s;
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

