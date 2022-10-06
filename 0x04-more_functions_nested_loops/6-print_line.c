#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: is the character
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n++
	}
	_putchar('\n');
}
