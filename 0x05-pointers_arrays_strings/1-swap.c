#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: parameter tested
 * @b: parameter tested
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

