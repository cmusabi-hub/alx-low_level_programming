#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 * Return: 0 for success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("Last digit %i is -%i and is less than 6 and not 0", n, (n % 10));
	else if ((n % 10) > 5)
		printf("Last digit %i is %i and is greater than 5", n, (n % 10));
	else
		printf("Last digit %i is %i and is less than 6 and not 0", n, (n % 10));
	return (0);
}

