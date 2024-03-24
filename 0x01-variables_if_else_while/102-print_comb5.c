#include <stdio.h>

/**
 * main - main function
 * Return: 0 for success
 */

int main(void)
{
	int num_1, num_2, num_3, num_4;

	for (num_1 = 0; num_1 < 10; num_1++)
	{
		for (num_2 = 0; num_2 < 9; num_2++)
		{
			for (num_3 = 0; num_3 < 9; num_3++)
			{
				for (num_4 = num_2 + 1; num_4 < 9; num_4++)
				{
					putchar('0' + num_1);
					putchar('0' + num_2);
					putchar(' ');
					putchar('0' + num_3);
					putchar('0' + num_4);
					if (num_1 < 10 && num_2 < 9 && num_3 < 10 && num_4 < 10)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}

