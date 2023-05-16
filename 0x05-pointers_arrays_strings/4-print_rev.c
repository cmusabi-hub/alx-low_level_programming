#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string
 * Retun: void
 */

void print_rev(char *s)
{
	int i, length;

	for (length = 0; s[length] != '\0'; length++)
		;

	for (i = (length - 1); s[i] != '\0'; i--)
		_putchar(s[i]);
	_putchar('\n');
}

