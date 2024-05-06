#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be square rooted
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	int square = 1;

	return (sqr_root(n, square));
}

/**
 * sqr_root - returns the square root of a number
 * @n: number to be square rooted
 * @square: number tested
 * Return: square root or -1 if its not a natural number
 */
int sqr_root(int n, int square)
{
	if (square * square == n)
		return (square);
	else if (square * square < n)
		return (sqr_root(n, square + 1));
	else
		return (-1);
}

