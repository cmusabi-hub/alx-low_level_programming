#include "main.h"

/**
 * main - main function
 * Return: 0 for success
 */

int main(void)
{
	int num_1 = 1, num_2 = 2, sum, fibon;

	for (fibon = 0; fibon < 50; fibon++)
	{
		sum = num_1 + num_2;
		num_1 = num_2;
		num_2 = sum;
		printf("%d", sum);
		if (fibon < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

