#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int iterate;
	unsigned int num_1 = 0, num_2 = 1, sum;

	for (iterate = 0; iterate < 98; iterate++)
	{
		sum = num_1 + num_2;

		printf("%d", sum);
		if (iterate  < 97)
			printf(", ");
		num_1 = num_2;
		num_2 = sum;
	}
	printf("\n");
	return (0);
}

