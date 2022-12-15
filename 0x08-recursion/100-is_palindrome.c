#include "main.h"

/**
 * is_palindrome - returns 1 if a string is palindrome and 0 if not palindrone
 * @s: string tested
 *
 * Return: string if palindrome
 */

int is_palindrome(char *s)
{
	int i = 0;

	if (*s != s[length(s) - i])
	{
		return(0);
	}
	else
	{
		i++;
		return (is_palindrome(s + 1));
	}
}
/**
 * length - prints the length of the string
 * @s: string tested
 *
 * Return: string length i is returned
 */

int length(char *s)
{
	int i = 0;

	if (*s + i)
	{
		i++;
		i += length(s + i);
	}

	return (i);
}
