#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: desstination string
 * @src; string to be concatenated
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *string = dest;
	int index = 0;

	while (*string)
	{
		string++;
	}
	while (src[index])
	{
		string[index] = src[index];
		index++;
	}
	string[index] = '\0';
	return (dest);
}

