#include "main.h"

/**
 * main - main function
 * Return: 0 on success
 */

int main(void)
{
	int sum, i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum + i;
		}
	}
	_putchar('0' + sum);
	return (0);
}

