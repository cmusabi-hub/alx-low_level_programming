#include <stdio.h>
#include "main.h"

/**
 * main - prints the arguments
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: value of 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

