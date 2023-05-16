#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string to another string
 * @dest: destination to be copied
 * @src: source to be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0, j = 0; src[i] != '\0'; i++, j++)
		dest[j] = src[i];
	dest[i] = '\0';
	printf("\n");
	return(dest);
}

