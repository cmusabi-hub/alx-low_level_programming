#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	return (0);
}

