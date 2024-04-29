#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int diag_1 = 0, diag_2 = size - 1, row, sum_1 = 0, sum_2 = 0;

	for (row = 0; row < size; row++)
	{
		sum_1 += a[(row * size) + diag_1];
		sum_2 += a[(row * size) + diag_2];
		diag_2--;
		diag_1++;
	}
	printf("%d, %d\n", sum_1, sum_2);
}

