#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int start = 0, end = strlen(s) - 1;

	return (palindrome_num(s, start, end));
}

int palindrome_num(char *s, int start, int end)
{
	if (start >= end)
		return(1);
	if (s[start] == s[end])
		return (palindrome_num(s, ++start, --end));
	else
		return (0);
}

