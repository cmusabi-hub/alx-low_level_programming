#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination to be copied
 * @src: source of the memory
 * @n: bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
