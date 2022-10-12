#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int i, j, len;

	for (i = 0; s[i] != '\0'; i--)
		;
	len = i;

	for (j = len; j >= 0; j--)
	{
		putchar(s[j]);
	}
	_putchar('\n');
}
