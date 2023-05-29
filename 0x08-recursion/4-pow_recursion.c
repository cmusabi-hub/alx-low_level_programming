#include "main.h"

/**
 * _pow_recursion - returns power of a number
 * @x: number to be raised
 * @y: bytes to be raised
 * Return: Power or -1 if less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

