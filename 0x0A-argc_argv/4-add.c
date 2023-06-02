#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no argument 1 if error
 */

int main(int argc, char *argv[])
{
	int i = 1, j, add;

	if (argc < 2)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			add += atoi(argv[i]);
		}
	}
	printf("%d\n", add);
	return (0);
}

