#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two integer arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: value of 1 if an error and 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int mult = 1;

		for (i = 1; i < 3; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
	}

	return (0);
}

