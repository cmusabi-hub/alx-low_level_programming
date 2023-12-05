#include "main.h"

/**
 * _supper - checks for uppercase character
 * @c: parameter tested
 * Return: 1 if uppercase and 0 if not uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

