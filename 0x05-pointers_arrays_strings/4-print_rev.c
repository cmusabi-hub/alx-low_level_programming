#include "main.h"

/**
 * print_rev - function that prints a string
 * @s: string
 */

void print_rev(char *s)
{
	int i;

	for (i >= 0; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
