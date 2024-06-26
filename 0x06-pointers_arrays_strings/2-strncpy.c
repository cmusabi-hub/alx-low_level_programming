#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination to be copied
 * @src: string to be copied
 * @n: number of bytes
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while ( index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

