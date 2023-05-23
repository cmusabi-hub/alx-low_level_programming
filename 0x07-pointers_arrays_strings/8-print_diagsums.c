#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of two diagonals of a square matrix
 * @a: matrix
 * @size: size of matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum_diag_1 = 0, sum_diag_2 = 0, i, j;

	for (i = 0, j = 0; i < size; i++, j++)
		sum_diag_1 += a[i * size + j];
	for (i = 0,j = size - 1; i < size; i++, j--)
		sum_diag_2 += a[i * size + j];
	printf("%i, %i\n", sum_diag_1, sum_diag_2);
}

