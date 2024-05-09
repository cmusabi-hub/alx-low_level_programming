#include "main.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success 1 for fail
 */
int main(int argc, char *argv[])
{
	int sum = 0, iter;

	if (argc > 1)
	{
		for (iter = 1; iter < argc; iter++)
		{
			sum += atoi(argv[iter]);
		}
		printf("%d\n", sum);
	}
	else if (argc == 0)
		printf("0\n");
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

