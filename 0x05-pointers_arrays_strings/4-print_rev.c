#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int i, a = 0;

	for (i = 0; i <= s[a]; i--)
	{
		_putchar(s[i]);
		a++;
	}
	_putchar('\n');
}
