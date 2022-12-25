#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 1 if argument is not an integer and 0 if successful
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (argc < 1)
		{
			printf("%d\n", 0);
		}
		else if (isdigit(argv[i] == 0))
		{
			puts("Error\n");
			return (1);
		}
	}
	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

