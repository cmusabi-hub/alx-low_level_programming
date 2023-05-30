#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number tested
 * Return: square root of number or -1 if it does not have a square root
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	return (sqr_root(n, i));
}
/**
 * sqr_root - gets the root by increamenting m
 * @n: number tested
 * @m: square root number
 * Return: squareroot
 */

int sqr_root(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m < n)
		return (sqr_root(n, m + 1));
	else
		return (-1);
}

