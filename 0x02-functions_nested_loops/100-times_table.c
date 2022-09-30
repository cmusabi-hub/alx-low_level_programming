#include "main.h"

/**
 * print_times_tables - function that prints the n times table, starting with 0
 *
 * n: is the integer
 * m: is an integer
 * k: is the second integer
 * mult: is the multiplication of the two integers
 */

void print_times_table(int n)
{
	int m, k, mult;
	if ( n <= 15 && n >=0 )
		for (m = 0; m <= n; m++ )
		{
			for (k = 0; k <= n; k++)
			{
				_putchar(' ');
				mult = m * k;
				if (mult < 10)
				{
					_putchar(mult + '0');
					_putchar(',');
				}
				else if (mult < 100)
				{
					_putchar(mult + '0');
					_putchar((mult % 10) + '0');
				}
				else
				{
					_putchar(mult + '0');
					_putchar((mult / 10) % 10 + '0');
					_putchar((mult % 10) + '0')
				}
			}
			_putchar('\n');
		}

}
