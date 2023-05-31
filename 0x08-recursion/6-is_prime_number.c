#include "main.h"

/**
 * is_prime_number - returns prime number
 * @n: number tested
 * Return: prime number else 0
 */

int is_prime_number(int n)
{
	int m = 2;

	return (prime_num(n, m));
}

/**
 * prime_num - returns prime number
 * @n: number tested
 * @m: num incremented to test n
 * Return: prime number else 0
 */

int prime_num(int n, int m)
{
	if (n % m == 0 && m == n)
		return (1);
	else if (n % m != 0 && m < n)
		return (prime_num(n, m + 1));
	else
		return (0);
}

