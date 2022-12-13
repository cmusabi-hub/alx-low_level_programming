#include "main.h"

/**
 * _sqrt_recursion - returns square root of a number
 * @n: number tested
 * Return: return square root of n
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n == 1 || n == 0)
		return (n);
	return (square_rt(n, root));
}

/**
 * square_rt - finds the natural square root of an number
 * @num: number tested for square root
 * @root: the root tested
 *
 * Return: If the number has a natural square root - the square root.
 * if the number does not have a natural square root return -1.
 */

int square_rt(int num, int root)
{
	if (root * root == num)
	{
		return (root);
	}
	else if (root * root > num)
	{
		return (-1);
	}
	else
	{
		return (square_rt(num, root + 1));
	}
}
