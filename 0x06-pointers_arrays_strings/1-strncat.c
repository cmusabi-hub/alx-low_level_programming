#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source to be copied
 * @n: number of bytes
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index, dest_len = 0;

	while(dest[dest_len])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}

