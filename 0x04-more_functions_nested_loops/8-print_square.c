#include "main.h"

/**
 * print_square - function that prints a square
 * @size: the value tested
 */

void print_square(int size)
{
	int i, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
		}_putchar('\n');
	}
}
