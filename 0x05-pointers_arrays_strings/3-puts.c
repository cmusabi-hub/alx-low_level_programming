#include "main.h"

/**
 * _puts - function that prints a string
 *
 */

void _puts(char *str)
{
	char i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
