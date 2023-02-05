#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers followed by a new line
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

	for (; i < n; i++)
	{
		num = va_arg(valist, int);
		printf("%d", num);
		if (i < (n - 1))
			printf("%s ", separator);
	}
	printf("\n");
	va_end(valist);
}
