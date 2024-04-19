#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination to be concatenated
 * @src: string to be copied
 * @n: number of bytes
 * return: poiter to the string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	char *string = dest;

	if (src)
	{
		while (*string)
			string++;
		while (src[index] && index < n)
		{
			string[index] = src[index];
			index++;
		}
		string[index] = '\0';
	}
	return (dest);
}

