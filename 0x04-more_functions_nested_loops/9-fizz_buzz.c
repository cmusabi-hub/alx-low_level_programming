#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num < 100)
		{
			if (num % 3 == 0 && num % 5 == 0)
				printf("FizzBuzz ");
			else if (num % 5 == 0)
				printf("Buzz ");
			else if (num % 3 == 0)
				printf("Fizz ");
			else
				printf("%d ", num);
		}
		else
			printf("Buzz");
	}
	return (0);
}

