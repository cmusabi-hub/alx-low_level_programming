#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: parameter tested
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
		len++;
	return (len);
}

