#include <stdio.h>

/**
 * main - sum of fibonacci numbers 
 * Return: 0 on success
 */

int main(void)
{
	int n = 98, i, fib[n];

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < n; i++)
	{
		fib[i] = fib[i - 2] + fib[i - 1];
	}
	printf("%d\n", fib[n - 1]);
}

