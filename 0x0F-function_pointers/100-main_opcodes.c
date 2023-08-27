#include <stdlib.h>
#include <stdio.h>

/**
 * opcodes_print - prints the opocodes of the program
 * @a: address of the main function
 * @num: number of bytes to print
 * Return: void
 */

void opcodes_print(char * a, int num)
{
	int index = 0;

	for (; index < num; index++)
	{
		printf("%.2hhx", a[index]);
		if (index < num - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its main function
 * @argc: number of arguments passed
 * @argv: array of pointers
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int num = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcodes_print((char *)main, num);
	return (0);
}

