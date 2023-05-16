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
	int i, j, length;

	for (length = 0; src[length] != '\0'; length++)
		;
	for (i = 0, j = 0; i < (length + 1); i++, j++)
		dest[j] = src[i];
	printf("\n");
	return(dest);
}

