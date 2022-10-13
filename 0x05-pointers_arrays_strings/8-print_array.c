#include "main.h"
#include  <string.h>
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: string tested
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf(",");
		printf(" ");
		printf("%d", a[i]);
	}
	printf("\n");
}
