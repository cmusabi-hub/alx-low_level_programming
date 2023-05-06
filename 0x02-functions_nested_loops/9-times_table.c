#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0
 * Return: void
 */

void times_table(void)
{
	int i, j, mult;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mult = i * j;
			if (j == 0)
			{
				_putchar('0' + mult);
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				if (mult < 10)
				{
					_putchar(' ');
					_putchar('0' + mult);
					if (j < 9)
						_putchar(',');
				}
				else
				{
					_putchar('0' + (mult / 10));
					_putchar('0' + (mult % 10));
					if (j < 9)
						_putchar(',');
				}
			}

		}
		_putchar('\n');
	}
}

