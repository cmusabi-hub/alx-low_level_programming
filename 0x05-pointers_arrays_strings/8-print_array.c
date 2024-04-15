#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int iter;

	if (a)
	{
		for (iter = 0; iter < n; iter++)
		{
			printf("%d", a[iter]);
			if (iter < (n - 1))
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}

