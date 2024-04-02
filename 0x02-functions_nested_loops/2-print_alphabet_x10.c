#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
	int num_1;
	char alpha;

	for (num_1 = 0; num_1 < 10; num_1++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}

