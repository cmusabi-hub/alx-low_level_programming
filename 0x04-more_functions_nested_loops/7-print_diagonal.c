#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of times \ to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int num_1, num_2;
	
	if (n > 0)
	{
		for (num_1 = 0; num_1 < n; num_1++)
		{
			for (num_2 = 0; num_2 < num_1; num_2++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}

