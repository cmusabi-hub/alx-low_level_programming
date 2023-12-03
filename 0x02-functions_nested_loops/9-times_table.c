#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table starting with 0
 * Return: void
 */

void times_table(void)
{
	int num_1, num_2, mult;

	for (num_1 = 0; num_1 < 10; num_1++)
	{
		for (num_2 = 0; num_2 < 10; num_2++)
		{
			mult = num_1 * num_2;
			printf("%d", mult);
			if (num_2 < 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}

