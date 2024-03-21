#include <stdio.h>

/**
 * main - main function
 * Return: 0 for success
 */

int main(void)
{
	int num_1, num_2, num_3;

	for (num_1 = 0; num_1 < 8; num_1++)
	{
		for (num_2 = num_1 + 1; num_2 < 9; num_2++)
		{
			for (num_3 = num_2 + 1; num_3 < 10; num_3++)
			{
				putchar('0' + num_1);
				putchar('0' + num_2);
				putchar('0' + num_3);
				if (num_1 != 7 || num_2 != 8 || num_3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

