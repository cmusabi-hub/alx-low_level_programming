#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	long int num_1 = 0, num_2 = 1, sum;
	int iterate;

	for (iterate = 0; iterate < 50; iterate++)
	{
		sum = num_1 + num_2;
		num_1 = num_2;
		num_2 = sum;
		printf("%ld", (long)sum);
		if (iterate < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}

