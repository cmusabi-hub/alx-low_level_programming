#include "3-calc.h"

/**
 * main - main function
 * @num1: first integer
 * @num2: second integer
 * @operator: operation to be executed
 *
 * Return: result of the arguments
 */

int main (int argc, char *argv[])
{

	int  num1, num2, sum;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	sum = f(num1, num2);
	printf("%d\n", sum);

	return (0);
}

