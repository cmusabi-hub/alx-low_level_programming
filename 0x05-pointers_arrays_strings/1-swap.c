#include "main.h"

/**
 * swap_int - swaps values of the two integers
 * @a: integer
 * @b: integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

