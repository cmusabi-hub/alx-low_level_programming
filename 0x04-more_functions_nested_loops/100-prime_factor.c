#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * largestPrimeFactor - gets the largest prime factor
 * Return: prime number
 */

long largestPrimeFactor(long num)
{
	long prime_num, largest_prime, iterator;
	if (num > 0)
	{
		if (num % 2 == 0)
		{
			largest_prime = 2;
			prime_num = num / 2;
		}
		else
			prime_num = num;

		for (iterator = 3; iterator <= sqrt(prime_num); iterator += 2)
		{
			while (prime_num % iterator == 0)
			{
				largest_prime = iterator;
				prime_num /= iterator;
			}
		}

		if (prime_num > 2)
			largest_prime = prime_num;
		return (largest_prime);
	}
}
/**
 * main - main function
 * Retuns: 0 for success.
 */

int main(void)
{
	long number = 612852475143, largestPrime;
	
	largestPrime =  largestPrimeFactor(number);
	printf("%ld\n", largestPrime);
	return (0);
}

