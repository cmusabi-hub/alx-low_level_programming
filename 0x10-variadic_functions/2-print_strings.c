#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int iter;
	char *_string;
	va_list args;

	va_start(args, n);

	for (iter = 0; iter < n; iter++)
	{
		_string = va_arg(args, char *);

		if (_string == NULL)
			_string = "(nil)";
		if (separator == NULL)
			printf("%s", _string);
		else if (iter < (n - 1))
			printf("%s%s", _string, separator);
		else
			printf("%s", _string);
	}
	printf("\n");
	va_end(args);
}

