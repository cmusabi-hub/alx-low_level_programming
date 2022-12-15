#include "main.h"

/**
 * is_prime_number - returns 1 if input is a prime number otherwise 0
 * @n: number tested
 *
 * Return: return value if a prime number
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n == 2)
	{
		return (1);
	}
	else if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime_num(n, div));
	}
}

/**
 * _prime_num - returns 1 if input is a prime number otherwise 0
 * @n: number tested
 * @div: checks the divisibility test of n
 *
 * Return: the _prime_num
 */

int _prime_num(int n, int div)
{
	if (div <= n)
	{
		if (n % div == 0)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (_prime_num(n, div + 1));
}
