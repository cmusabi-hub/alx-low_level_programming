#include <stdio.h>

/**
 * main - main function
 * Return: 0 for success
 */

int main(void)
{
	int num;
	char hex[16] = "0123456789abcdef";

	for (num = 0; num <= 16; num++)
	{
		putchar(hex[num]);
	}
	putchar('\n');
	return (0);
}

