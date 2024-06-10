#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns sum of all its parameters
 * @n: number of parameters
 * Return: 0 if n == 0 or the sum of parameters passed
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int iter, sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (iter = 0; iter < n; iter++)
	{
		sum += va_arg(args, unsigned int);
	}
	va_end(args);
	return (sum);
}

