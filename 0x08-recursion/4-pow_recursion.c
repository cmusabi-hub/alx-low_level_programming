#include "main.h"
/**
 * _pow_recursion - returns power of x
 * @x: number to be powered
 * @y: number of times to be powered
 * Return: power of the number x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

