#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: destination to be copied
 * @src: string to be copied
 * Return: string copied
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

