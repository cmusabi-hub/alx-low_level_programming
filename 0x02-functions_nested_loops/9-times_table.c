#include "main.h"

/**
 *times_table - function that prints 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int n, m, prod;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			prod = m * n;
				if (prod < 9){
					_putchar(prod);
					_putchar(',');
					_putchar(' ');
				}
				else{
					_putchar(prod /10);
					_putchar(prod % 10);
					_putchar(',');
					_putchar(' ');
				}
		}
		_putchar('\n');
	}
}

