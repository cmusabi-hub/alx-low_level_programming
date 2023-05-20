#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to be printed
 * Return - void
 */

void print_number(int n)
{
	int index, *ptr = n;

	for (index = 0; ptr[index] != '\0'; index++)
	{
		if (ptr[index] >= 0 && ptr[index] <= 9)
			_putchar('0' + ptr[index]);
	}
}

