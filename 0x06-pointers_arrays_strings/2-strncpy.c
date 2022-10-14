#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i < n && dest[i] = '\0'; i++)
		;
	for(j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
