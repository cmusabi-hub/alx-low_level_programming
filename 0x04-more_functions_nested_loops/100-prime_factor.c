#include <stdio.h>

/**
 * main - prints numbers
 * Return: 0 for success
 */

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long large_prime_num = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num /= divisor;
			large_prime_num = divisor;
		}
		divisor++;
	}
	printf("%ld\n", large_prime_num);
	return (0);
}

