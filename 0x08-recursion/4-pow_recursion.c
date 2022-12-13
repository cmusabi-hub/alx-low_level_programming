#include "main.h"

/**
 * _pow_recursion: returns the value of x raised to the power of y
 * @x: number tested
 * @y: raised to y bytes
 * Return: power of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (0);
	}
	return (x * _pow_recursion(x, y - 1));
}
