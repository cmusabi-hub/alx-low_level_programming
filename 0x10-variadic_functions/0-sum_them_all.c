#include "variadic_functions.h"
#include <starg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: first parameter
 * @...: ellipsis
 *
 * Return: sum of the parameters, 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int n = 0, sum = 0;

	va_list ap;

	va_start(ap, n);

	for (; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);

	return val;
}
