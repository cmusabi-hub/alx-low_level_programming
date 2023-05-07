#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: number to be tested
 * Return: void
 */

void print_to_98(int n)
{
	for (; n <= 98;n++)
	{
		if (n < 10)
			_putchar('0' + n);
		else
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
		}
		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
