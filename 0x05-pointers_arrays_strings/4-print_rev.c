#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int i, len = strlen(s);

	for (i = 0; i <= len; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
