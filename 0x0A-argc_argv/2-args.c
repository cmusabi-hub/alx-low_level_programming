#include "main.h"
/**
 * main - main function
 * @argc: argument counnt
 * @argv: argument vector
 * Return: 0 for success
 */
int main (int argc, char *argv[])
{
	int iter;

	for (iter = 0; iter < argc; iter++)
		printf("%s\n", argv[iter]);
	return (0);
}

