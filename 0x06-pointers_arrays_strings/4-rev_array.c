#include "main.h"

/**
 * reverse_array - reverses the contents of an array of integers
 * @a: array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int index, temp;

	for (index = 0; index < (n / 2); index++)
	{
		temp = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = temp;
	}
}

