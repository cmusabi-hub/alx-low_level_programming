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
	int index_, dest_len = 0;

	while (dest[dest_len])
		dest_len++;
	for (index_ = 0; src[index_] && index_ < n; index_++)
		dest[dest_len++] = src[index_];
	return (dest);
}

