#include "main.h"

/**
 * _puts - prints a sting followed y new line
 * @str: pointer to the string
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

