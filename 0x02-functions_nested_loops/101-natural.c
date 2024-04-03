#include "main.h"

/**
 * main - main function
 * Return: 0 for success
 */

int main(void)
{
	int num, sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum += num;
		}
	}
	printf("%d", sum);
	return (0);
}

