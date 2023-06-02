#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i, mult = 1;
	
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);	
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

