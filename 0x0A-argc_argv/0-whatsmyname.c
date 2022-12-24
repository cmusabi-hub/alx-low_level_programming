#include "main.h"
#include <stdio.h>

/**
 * main -  A program that prints its name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: value returned is 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

