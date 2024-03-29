#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string tested
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int c = 1;

	if (*s == '\0')
		return (0);
	else
		return (c + _strlen_recursion(s + 1));
}

