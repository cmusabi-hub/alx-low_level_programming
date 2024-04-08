#include "main.h"

/**
 * prints_diagonal - prints a diagonal line
 * @n: length of the diagonal line
 */

void print_diagonal(int n)
{
	int row, column;
	for (row = 0; row < n; row++)
	{
		for (column = 0; column < row; column++)
		{
			if (column == (row-1))
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

