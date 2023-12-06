#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * except for 2 & 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (!(num == 2 || num == 4))
			_putchar('0' + num);
	}
	_putchar('\n');
}

