#include "main.h"

/**
 * more-numbers - prints 10 times numbers 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int row, column;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column <= 14; column++)
		{
			if (column > 10)
				_putchar('0' + (column / 10));
			_putchar('0' + (column % 10));
		}
		_putchar('\n');
	}
}

