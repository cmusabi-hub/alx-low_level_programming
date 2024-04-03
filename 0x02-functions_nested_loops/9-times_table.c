#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int row, column, mult;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			mult = row * column;
			printf("%2d", mult);
			if (column < 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}

