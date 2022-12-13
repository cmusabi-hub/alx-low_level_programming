#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number tested
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * (factorial(n - 1)));
	}
}
