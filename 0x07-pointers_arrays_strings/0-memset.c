#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @n: number of bytes
 * @s: memory address
 * @b: char to be used
 * Return: return a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	s = b;
	for (;s[n - 1]; n++)
		;
	return (s);
}
