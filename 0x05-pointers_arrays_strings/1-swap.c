#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first parameter
 * @b: pointer to the second parameter
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

