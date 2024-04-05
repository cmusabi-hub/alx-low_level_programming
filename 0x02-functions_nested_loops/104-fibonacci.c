#include "main.h"

/**
 * main - main function
 * Return: 0 for success
 */

int main(void)
{
	unsigned long int fibon, sum, num_1 = 1, num_2 = 2;

	for (fibon = 2; fibon < 98; fibon++)
	{
		sum = num_1 + num_2;
		printf("%lu", sum);
		if (fibon < 97)
		{
			printf(", ");
		}
		num_1 = num_2;
		num_2 = sum;
	}
	printf("\n");
	return (0);
}

