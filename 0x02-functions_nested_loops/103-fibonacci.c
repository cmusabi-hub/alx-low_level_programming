#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints even values
 * Return: 0 for success
 */
int main(void)
{
	int a = 0, b = 1, next, sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%d\n", sum);
	return (0);
}

