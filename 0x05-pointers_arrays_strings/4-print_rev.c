#include "main.h"
#include <string.h>

/**
 * print_rev - function that prints a string
 * @s: string
 */

void print_rev(char *s)
{
	int i, len = strlen(s);

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
