#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		else
			_putchar('0' + num);
	}
	_putchar('\n');
}

