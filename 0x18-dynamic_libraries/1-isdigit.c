#include "main.h"

/**
 * _isdigit - Checks if digit is 0 through 9
 * Return: return 1 if value is correct otherwise 0 if value
 * is incorrect
 * @c: the number tested
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
