#include <stdio.h>

/**
 * main - function
 * Return: 0
 */

int main(void)
{
	char alpha = 'a';
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	while (alpha < 'g')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}

