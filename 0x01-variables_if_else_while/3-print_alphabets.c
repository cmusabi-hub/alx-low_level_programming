#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * Return: returns 0 on success
 */

int main(void)
{
	int small, capital;

	for (small = 97; small <= 122; small++)
		putchar(small);
	for (capital = 65; capital <= 90; capital++)
		putchar(capital);
	putchar('\n');
	return (0);
}

