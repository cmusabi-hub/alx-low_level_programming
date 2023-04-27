#include <stdio.h>

/**
 * main - main fuction
 * Return: returns 0
 */

int main(void)
{
	int first = 'a';
	char last = 'z';

	for (; first  <= last; first++)
		putchar(first);
	putchar('\n');
	return (0);
}

