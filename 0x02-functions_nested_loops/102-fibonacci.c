#include <stdio.h>

/**
 * main - main program
 * Return: return 0 for success
 */

int main(void)
{
	int a = 0, b = 1, sum;

	while (b < 50)
	{
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("%d\n", sum);
	return (0);
}

