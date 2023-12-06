#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int num_1, num_2;

	for (num_1 = 0; num_1 < 10; num_1++)
	{
		for (num_2 = 0; num_2 < 15; num_2++)
		{
			if (num_2 >= 10)
				_putchar('0' + num_2 / 10);
			_putchar('0' + num_2 % 10);
		}
		_putchar('\n');
	}
}

