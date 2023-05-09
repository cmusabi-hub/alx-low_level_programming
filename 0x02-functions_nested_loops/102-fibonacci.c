#include <stdio.h>

/**
 * main - main program
 * Return: return 0 for success
 */

int main(void)
{
	int a = 0, b = 1, n = 0, sum;

	while (n < 50)
	{
		sum = a + b;
		printf("%d", a);
		n < 49 ? printf(", ") : printf("\n");
		a = b;
		b = sum;
		n++;
	}
	return (0);
}

