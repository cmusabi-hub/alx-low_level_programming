#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int num_1 = atoi(argv[1]), num_2 = atoi(argv[3]), result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = operation(num_1, num_2);
	printf("%d\n", result);
	return (0);
}

