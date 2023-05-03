#include <stdio.h>

/**
 * main - main function
 * Return: return 0 on success
 */

int main(void)
{
	int i = 0;
	for (; i < 10; i++)
		putchar('0' + i);
	for (i = 'a'; i < 'g'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

