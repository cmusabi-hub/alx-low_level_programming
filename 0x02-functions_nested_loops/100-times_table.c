#include "main.h"

/**
 * print_times_tables - function that prints the n times table, starting with 0
 *
 * n: is the integer
 * num2: is the second integer
 * mult: is the multiplication of the two integers
 */

void print_times_table(int n)
{
	int m, mult = n * m;
	if ( n <= 15 && n >=0 )
		for (m = 0; m <= n; m++)
		{
			_putchar(' ');
			if (mult < 10)
			{
				_putchar(mult + '0');
				_putchar(',');
			}
			else
				_putchar(mult + '0');
				_putchar((mult % 10) + '0');
				_putchar(',');
		}
	_putchar('\n');
}
