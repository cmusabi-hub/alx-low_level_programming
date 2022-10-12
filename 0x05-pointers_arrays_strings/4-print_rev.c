#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; i <= strlen(s); i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
