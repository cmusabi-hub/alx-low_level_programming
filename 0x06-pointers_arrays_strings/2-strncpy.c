#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: string destinartion
 * @src: source string
 * @n: amount of bytes to be copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
