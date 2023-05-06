#include "main.h"

/**
 * print_last_digit -prints last digit of a number
 * @n: number to be tested
 * Return: last digit
 */

int print_last_digit(int n)
{
	int num;

	if (n < 0)
		num = -1 * (n % 10);
	else
		num = n % 10;

	_putchar(num + '0');
	return (num);
}

