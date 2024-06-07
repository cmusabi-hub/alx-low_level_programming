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
	int (*func_ptr)(int, int);
	int num_1 = atoi(argv[1]), num_2 = atoi(argv[3]), result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func_ptr = get_op_func(argv[2]);

	if (func_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = func_ptr(num_1, num_2);

	printf("%d\n", result);
	return (0);
}

