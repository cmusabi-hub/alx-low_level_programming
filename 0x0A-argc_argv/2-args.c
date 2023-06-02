#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * @argc - argument count
 * @argv - argument vector
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

