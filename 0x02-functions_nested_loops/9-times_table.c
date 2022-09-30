#include "main.h"

/**
 * void times_table - function that prints 9 times table, starting with 0
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
			if (prod < 9)
				putchar(prod);
				putchar(',');
				putchar(' ');
			else
				putchar(prod /10);
				putchar(prod % 10);
				putchar(',');
				putchar(' ');
		}
		putchar('\n');
	}
}

