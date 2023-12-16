#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: paameter passed
 */

void print_rev(char *s)
{
	int len = 0;

	while(s[len])
	{
		len++;
	}

	for (;len >= 0; len--)
		_putchar(s[len]);
i`	_putchar('\n');
}

