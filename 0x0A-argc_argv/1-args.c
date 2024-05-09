#include "main.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
 */
int main(int argc, char __attribute__((unused)) *arg[])
{
	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("0\n");
	return (0);
}

