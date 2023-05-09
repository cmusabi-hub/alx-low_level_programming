#include "main.h"

/**
 * print_times_table - prints n times time table
 * @n: number times table
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, mult;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mult = i * j;

				if (mult < 10)
				{
					_putchar('0' + mult);
				       	if (j < n)
					{ 
						_putchar(',');
					       	_putchar(' ');
					}
				}
				else if (mult < 100)
				{
					_putchar('0' + mult / 10);
					_putchar('0' + mult % 10);
					if (j < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					_putchar('0' + mult / 100);
					_putchar('0' + (mult / 10) % 10);
					_putchar('0' + mult % 10);
					if (j < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}

