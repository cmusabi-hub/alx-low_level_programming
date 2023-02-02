#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers followe by a new line
 * @separator: is , character
 * @n: argument parameters
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num = 0;
	char sep = ',';
	separator = &sep;

	if (separator == NULL)
		printf("\n");

	va_list list;
	va_start(list, n);

	for (; num < n; num++)
	{
		printf("%d%s ", n, separator);
	}
	printf("\n");
	va_end(list);
}
