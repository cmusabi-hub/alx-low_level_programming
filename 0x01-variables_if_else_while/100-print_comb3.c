#include <stdio.h>

/**
 * main - function
 * Return: 0
 */

int main(void)
{
	int num_1, num_2;

	for (num_1 = 0; num_1 < 9; num_1++)
	{
		for (num_2 = num_1 + 1;num_2 < 10; num_2++)
		{
			putchar(num_1 + '0');
			putchar(num_2 + '0');
			if (num_1 < 8 || num_2 < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

