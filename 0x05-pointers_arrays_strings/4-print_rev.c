#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int len = strlen(s);

	for (len = 0; len <= s[len]; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
