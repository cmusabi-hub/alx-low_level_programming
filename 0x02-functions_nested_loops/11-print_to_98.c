#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * @n: the integer tested.
 */

void print_to_98(int n)
{
	if (n < 98)
		for (n; n <= 98; n++)
			printf("%d, \n", n);
}
