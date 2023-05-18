#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination to be copied
 * @src: source
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int index, dest_len;

	for (dest_len = 0; dest[dest_len]; dest_len++)
		;
	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}

