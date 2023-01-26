#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @num1: first integer
 * @num2: second integer
 * @result: operation to be executed
 *
 * Return: 0 if it is successfull
 */

int main (int argc, char *argv[])
{

	int  num1, num2, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = f(num1, num2);
	printf("%d\n", result);
	return (0);
}

