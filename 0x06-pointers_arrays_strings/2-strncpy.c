#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination to be copied
 * @src: source to be copied
 * @n: number of bytes to be copied
 * Return: dest string copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}

