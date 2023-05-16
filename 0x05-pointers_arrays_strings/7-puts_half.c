#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 * Return: void
 */

void puts_half(char *str)
{
	int i, length, start_len;

	for (length = 0; str[length] != '\0'; length++)
		;
	if (length % 2 != 0)
		start_len = (length - 1) / 2;
	else
		start_len = length / 2;
	for (i = start_len; i < length && str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

