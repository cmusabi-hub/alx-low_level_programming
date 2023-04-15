#include "main.h"

/**
 *_isuper - function that checks for uppercase character
 *
 * @c: the character
 * @b: the character tested
 * Return: return value 1 if c is an uppercase
 * Return: return value 0 otherwise
 */

int _isupper(int c)
{
	char b;

	for (b = 'A'; b <= 'Z'; b++)
	{
		if (c == b)
			return (1);
	}
	return (0);
}
