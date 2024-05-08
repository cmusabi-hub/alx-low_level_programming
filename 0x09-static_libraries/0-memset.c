#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer to the memory address
 * @n: number of bytes to fill
 * @b: bytes to be filled in the memory address
 * Return: s poiter to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *char_ptr = s;
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		char_ptr[index] = b;
	}
	return (s);
}

