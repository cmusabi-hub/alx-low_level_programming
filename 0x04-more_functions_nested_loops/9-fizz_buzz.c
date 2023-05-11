#include "main.h"
#include <stdio.h>

/**
 * main - Fizz Buzz program
 * Return: 0 for success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			if (i < 100)
				printf("FizzBuzz ");
			else
				printf("FizzBuzz");
		}
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}

