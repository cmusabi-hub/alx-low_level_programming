#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int len_1 = 0;

	for (; s[len_1] != '\0'; len_1++)
		;
	for (;s[len_1] >= 0; len_1--)
	{
		_putchar(s[len_1]);
	}
	_putchar('\n');
}

