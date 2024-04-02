#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: parameter tested
 * Return: 1 for lower for alphabet and 0 for otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

