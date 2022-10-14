#include "main.h"

/**
 * *_strncat - concatenates two srings
 * @dest: destination string
 * @src: source string
 * @n: amount of bytes used from src
 * Return: return value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	for(j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
