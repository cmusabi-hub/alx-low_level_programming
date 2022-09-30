#include <stdio.h>

/**
 * Program that computes and prints the sum of all mutiples of 3 or 5 below 1024
 * return : value is 0
 */

int main(void)
{
	int n, sum = 0;
	
	for (n = 0; n <= 1024; n++)
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			sum += n;
			print("%d\n", sum);
		}
	return (0);
}

