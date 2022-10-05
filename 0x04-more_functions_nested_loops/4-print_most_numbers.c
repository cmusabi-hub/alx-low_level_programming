#include "main.h"

/**
 * print_most_numbers - function that prints the numbers from 0 to 9
 * numbers 2 & 4 are not printed
 */

void print_most_numbers(void)
{
	int c;
	for (c = 0; c < 10; c++)
	{
		if (c == 2 || c == 4)
			continue;
		else
			_putchar(c);
	}
	_putchar(9);
}
