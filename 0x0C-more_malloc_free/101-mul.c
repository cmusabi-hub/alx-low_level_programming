#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @num1: number 1
 * @num2: number 2
 * Return: multiplication
 */

int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
		mult *= atoi(argv[i]);
	}
	printf("%i\n", mult);
	return (0);
}

