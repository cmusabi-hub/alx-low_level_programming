#include "main.h"
#include <string.h>
/**
 * is_palindrome - checks if string is palindrome
 * @s: string tested
 * Return: 1 if palindrome 0 if not.
 */
int is_palindrome(char *s)
{
	int start = 0, end = strlen(s) - 1;

	return (palindrome(s, start, end));
}

/**
 * palindrome - checks if string is palindrome
 * @s: string checked
 * @start: start of the string
 * @end: end of the sting
 * Return: 0 if not palindrome 1 if palindrome
 */
int palindrome(char *s, int start, int end)
{
	if (start > end)
		return (1);
	else if (s[start] == s[end])
		return (palindrome(s, ++start, --end));
	else
		return (0);
}

