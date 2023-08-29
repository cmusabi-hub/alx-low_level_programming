#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints each number followed by a separator after each number
 * @n: number of parameters passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index = 0, num;

	va_list arg_list;
	va_start(arg_list, n);
	for (; index < n; index++)
	{
		num = va_arg (arg_list, unsigned int);
		printf("%d", num);
		if (index < n - 1)
			printf(separator);
	}
	printf("\n");
}

