#include "main.h"

/**
 * _puts_recursion - prints a string followed by a newline
 * @s: string printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s +1);
	}
}
