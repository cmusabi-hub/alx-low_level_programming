#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination to be copied to
 * @src: source to be copied from
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *char_ptr = dest, *char_src = src;

	for (index = 0; index < n; index++)
	{
		char_ptr[index] = char_src[index];
	}
	return (dest);
}

