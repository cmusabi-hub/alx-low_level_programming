#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array
 * @n: number of elements to be printed in the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(a[i]);
	_putchar('\n');
}

