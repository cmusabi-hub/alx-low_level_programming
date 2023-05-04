#include <stdio.h>

/**
 * main - main function
 * Return: return value is 0 on success
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 98;i++)
	{
		for (j = 0; j < 99; j++)
		{
			if (i != j)
			{
				int d1 = i / 10;
				int d2 = i % 10;
				int d3 = j / 10;
				int d4 = j % 10;
				putchar('0' + d1);
				putchar('0' + d2);
				putchar(' ');
				putchar('0' + d3);
				putchar('0' + d4);
				if (i != 98 || j != 99)
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

