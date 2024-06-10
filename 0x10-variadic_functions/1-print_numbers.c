#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: it is a comma separator
 * @n: number of parameters passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int iter, num;
	va_list args;

	va_start(args, n);

	for (iter = 0; iter < n; iter++)
	{
		num = va_arg(args, unsigned int);

		if (separator == NULL)
			continue;
		else if (iter < (n - 1))
			printf("%d%s ", num, separator);
		else
			printf("%d\n", num);
	}
	va_end(args);
}

