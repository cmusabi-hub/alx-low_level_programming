#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 for success
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", argc - 1);
	return (0);
}

