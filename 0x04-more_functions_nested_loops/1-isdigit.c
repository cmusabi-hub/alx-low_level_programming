#include "main.h"

/**
 * _isdigit - checks for digit 0 through 9
 * @c: digit tested
 * Return: 1 if digit 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

