#include "main.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int mult;
	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return(0);
	}
	else
	{
		printf("Error\n");
		return (-1);
	}
}

