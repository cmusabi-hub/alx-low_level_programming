#include "main.h"
#include <stdio.h>

/**
 * main - function
 * Return: 0
 */

int main(void)
{
	int num_1 = 1, num_2 = 2, sum = 0, temp;

	for (; num_1 <= 4000000; num_1++)
	{
		if (num_1 % 2 == 0)
		{
			sum += num_1;
		}
		temp = num_1 + num_2;
		num_1 = num_2;
		num_2 = temp;
	}
	printf("%d", sum);
	return (0);
}

