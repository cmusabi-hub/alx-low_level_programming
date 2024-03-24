#include <stdio.h>

/**
 * main - main function
 * Return: 0 for success
 */

int main(void)
{
	int num_1, num_2;

	for (num_1 = 0; num_1 < 99; num_1++)
	{
		for (num_2 = num_1 + 1; num_2 < 100; num_2++)
		{
			putchar('0' + (num_1 / 10));
			putchar('0' + (num_1 % 10));
			putchar(' ');
			putchar('0' + (num_2 / 10));
			putchar('0' + (num_2 % 10));
			if (!(num_1 == 98 && num_2 == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

