#include "main.h"

/**
 * swap_int - function that swaps the value of integers
 * @a: integer 1
 * @b: integer 2
 */

void swap_int(int *a, int *b)
{
	int c = *a, d = *b;
	*a = d;
	*b = c;
}
