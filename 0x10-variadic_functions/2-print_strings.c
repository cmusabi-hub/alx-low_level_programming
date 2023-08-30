#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of characters passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *character;
	unsigned int index = 0;
	va_list arg_list;

	va_start (arg_list, n);
	for (; index < n; index++)
	{
		character  = va_arg (arg_list, char*);
		if (character == NULL)
			printf("nil");
		printf("%s", character);
		if (index < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	
	va_end (arg_list);
}

