#include <stdio.h>

/**
 * 612852475143
 * main - function that prints 
 * returns: returns zero
 */

int main(void)
{
	unsigned int a = 2;
	unsigned long n = 612852475143;

	while (a != n)
	{
		if (n % a == 0)
		{
			n = n / a;
		} else
		{
			a++;
		}
	}
	printf("%lu\n", n);
	return (0);

