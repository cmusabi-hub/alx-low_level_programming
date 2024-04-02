#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: parameter passed
 * Return: 1 if c is lowercase and 0 if not lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

