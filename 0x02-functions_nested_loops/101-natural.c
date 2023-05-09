#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * Return: 0 on success
 */

int main(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}

