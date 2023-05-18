#include "main.h"

/**
 * reverse_array - reverses contents of an array
 * @a: array reverse
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int start, end, temp;

	for (start = 0, end = n - 1; start < end; start++, end--)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
	}
}

