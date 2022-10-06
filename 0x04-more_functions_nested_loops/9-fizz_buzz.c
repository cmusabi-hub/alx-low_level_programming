#include <stdio.h>

/**
 * The program is called Fizz-Buzz Test
 * test from 1 to 100 multiples of 3 and 5
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("Fizz Buzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
		printf(" ");
	}
	return (0);
}

