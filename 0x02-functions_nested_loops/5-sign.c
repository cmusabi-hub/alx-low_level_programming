#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: integer to be tested
 * Return: 1 if positive 0 if 0 and - if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

