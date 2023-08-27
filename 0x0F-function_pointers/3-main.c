#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int num_1 = atoi(argv[1]), num_2 = atoi(argv[3]), result;
	char *operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(operator);
	
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = f(num_1, num_2);
	printf("%d\n", result);
	return (0);
}

