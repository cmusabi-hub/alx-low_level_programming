#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string tested
 *
 * Return: i length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_strlen_recursion(s + 1);
	}
	return (i);
}
