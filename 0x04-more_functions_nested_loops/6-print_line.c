#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n == 0 || n < 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	_putchar('\n');
}

