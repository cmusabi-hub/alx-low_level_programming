#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: , character
 * @n: number of strings passed to the function
 * Return: void. if a separator is Null don't print it
 * If one string is Null,print nil
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *_char;

	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		_char = va_arg(valist, char *);
		if (_char)
			printf("%s", _char);
		else
			printf("nil");
		if (i < n - 1 && separator)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(valist);
}
