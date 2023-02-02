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
	unsigned int i = 0;
	int num;

	va_list valist;

	va_start(valist, n);

	for (; num < n; num++)
	{
		printf("%d%s ", n, separator);
	}
	printf("\n");
	va_end(valist);
}
