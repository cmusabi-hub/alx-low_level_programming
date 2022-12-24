#include "main.h"
#include <stdio.h>

/**
 * main - program that prints argument count
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: value of 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, j = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%d",j++);
	}
	return (0);
}

