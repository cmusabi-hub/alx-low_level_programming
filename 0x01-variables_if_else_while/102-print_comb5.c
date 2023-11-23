#include <stdio.h>

/**
 * main - function
 * Return: 0
 */

int main(void)
{
	int num_1, num_2, num_3, num_4;

	for (num_1 = 0; num_1 < 10; num_1++)
	{
		for (num_2 = 0; num_2 < 9; num_2++)
		{
			for (num_3 = 0; num_3 < 10; num_3++)
			{
				for (num_4 = num_2 + 1; num_4 < 10; num_4++)
				{
				
					putchar(num_1 + '0');
					putchar(num_2 + '0');
					putchar(' ');
					putchar(num_3 + '0');
					putchar(num_4 + '0');
					
					if (!(num_1 == 9 && num_2 == 8 && num_3 == 9 && num_4 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

