#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: is the character
 */

void print_line(int n)
{
	for (n = 0; n > 0; n++)
		if ((n == 0) || (n < 0))
		{
			_putchar('\n');
		}
		else
			_putchar('_');
}
