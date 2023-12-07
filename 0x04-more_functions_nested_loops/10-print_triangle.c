#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, space, hash;
	
	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (space = (size - row - 1); space >= 0; space--)
				_putchar(' ');
			for (hash = 0; hash < row; hash++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

