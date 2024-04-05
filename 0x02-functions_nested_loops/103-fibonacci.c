#include "main.h"

/**
 * main - main function
 * Return: 0 for success
 */

int main(void)
{
	unsigned long int num_1 = 1, num_2 = 2, sum, fibon;

	printf("%lu, %lu", num_1, num_2);

	for (fibon = 2; fibon < 4000000; fibon++)
	{
		sum = num_1 + num_2;
		num_1 = num_2;
		num_2 = sum;
		if ((sum % 2 == 0))
		{
			printf(", %lu", sum);
		}
	}
	printf("\n");
	return (0);

}

