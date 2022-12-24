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
	printf("%d\n", argc - 1);
	return (0);
}

