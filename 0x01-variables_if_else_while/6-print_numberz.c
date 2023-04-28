#include <stdio.h>

/**
 * main - main function
 * Return: return 0 on success
 */

int main(void)
{
	int num = 0;

	for (; num < 10; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}

