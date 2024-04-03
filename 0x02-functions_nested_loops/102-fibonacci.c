#include "main.h"

/**
 * main - main function
 * Return: 0 for success
 */

int main(void)
{
	unsigned long long int num_1 = 1, num_2 = 2, sum, fibon;

	printf("%llu, %llu", num_1, num_2);
	for (fibon = 2; fibon < 50; fibon++)
	{
		sum = num_1 + num_2;
		num_1 = num_2;
		num_2 = sum;
		printf(", %llu", sum);
	}
	printf("\n");
	return (0);
}

