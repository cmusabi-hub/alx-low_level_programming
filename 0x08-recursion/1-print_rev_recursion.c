#include "main.h"
#include <stdlib.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be reversed
 * Return: Null or reversed string s
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		;
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

