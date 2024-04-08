#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = size; row > 0; row--)
		{
			for (column = 0; column < size; column++)
			{
				if (column < (row - 1))
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

