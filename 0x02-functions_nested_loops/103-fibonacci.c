#include "main.h"
#include <stdio.h>

/**
 * main - function
 * Return: 0
 */

int main(void)
{
	int num_1 = 0, num_2 = 1, iterate, sum;

	for (iterate = 0; iterate < 10; iterate++)
	{
		if (!(num_1 % 2 == 0 && num_1 % 3 == 0 && num_1 % 5 == 0))
		{
			sum = num_1 + num_2;
			printf("%d", sum);
			if (iterate < 9)
				printf(", ");
		}
		num_1 = num_2;
		num_2 = sum;
	}
}

