#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int num_1, num_2;

	if (size > 0)
	{
		for (num_1 = 0; num_1 < size; num_1++)
		{
			for (num_2 = 0; num_2 < size; num_2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}

