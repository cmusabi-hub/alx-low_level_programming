#include <stdio.h>

/**
 * main - main function
 * Return: return 0 on success
 */

int main(void)
{
	char alpha = 'z';

	for (; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}

