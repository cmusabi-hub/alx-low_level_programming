#include "main.h"

/**
 * print_triangle - prints triangle followed by a new line
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, spaces, hashes;

	for (row = 1; row <= size; row++)
	{
		for (spaces = size - row; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (hashes = 1; hashes <= row; hashes++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

