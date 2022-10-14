#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: string one
 * @src:string two
 * return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	;
	for (j = 0; dest[j] != '\0'; j++; i++)
	{
		dest[j] = src[i]
	}
	dest[j] = "\0"
	return (dest);
}
