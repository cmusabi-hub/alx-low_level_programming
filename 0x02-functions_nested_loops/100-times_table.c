#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: parameter tested
 * Return: void
 */

void print_times_table(int n)
{
	int num_1, num_2, mult;
	if (n < 15 && n > 0)
	{
		for (num_1 = 0; num_1 <= n; num_1++)
		{
			for (num_2 = 0; num_2 <= n; num_2++)
			{
				mult = num_1 * num_2;
				printf("%3d", mult);
				if (num_2 < n)
				{
					printf(", ");
				}
			}
			printf("\n");
		}
	}
}

