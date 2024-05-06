#include "main.h"
/**
 * is_prime_number - test if number iss prime number
 * @n: number tested
 * Return: returns 1 if prime number 0 if not prime
 */
int is_prime_number(int n)
{
	int num = 2;
	return (_prime_num(n, num));
}

/**
 * _prime_num - tests for prime number
 * @n: number tested
 * @num: number tested against
 * Return: 1 if prime 0 if otherwise
 */
int _prime_num(int n, int num)
{
	if (n % num == 0 && n == num)
		return (1);
	else if (n % num != 0 && num < n)
		return (_prime_num(n, num + 1));
	else
		return (0);
}

