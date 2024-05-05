#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: factorial of number
 * Return: value of the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

