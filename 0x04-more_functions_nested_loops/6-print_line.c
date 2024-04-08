#include "main.h"

/**
 * print_line - prints line
 * @c: number of lines to be printed
 * Return: void
 */

void print_line(int n)
{
	int num;

	for (num = 0; num < n; num++)
		_putchar('_');
	_putchar('\n');
}
