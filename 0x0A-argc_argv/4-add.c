#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no argument 1 if error
 */

int main(int argc, char *argv[])
{
	int i = 1, j, len, add = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		len = strlen(argv[i]);

		for (j = 0; j < len; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);

	return (0);
}

