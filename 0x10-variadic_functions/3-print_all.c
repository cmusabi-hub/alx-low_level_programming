#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 * Return: void
 */

/**
 * print_char - prints a character
 * @arg: A list of arguments pointing to character
 */

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - prints an integer
 * @arg: argument 
 */

void print_int(va_list arg)
{
	int num;
	
	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - prints float
 * @arg: argument
 */

void print_float(va_list arg)
{
	float dbl_num;
	
	dbl_num = va_arg(arg, double);
	printf("%f", dbl_num);
}

/**
 * print_string - prints string
 * @arg: string argument
 */

void print_string(va_list arg)
{
	char *string;

	string = va_arg(arg, char*);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

void print_all(const char * const format, ...)
{
	char separator = ',';
	int index = 0, index_2;
	print_arg functions[] = {
		{"c", print_char},
	     	{"i", print_int},
	       	{"f", print_float},
	       	{"s", print_string}
	};
	va_list va_types;

	va_start (va_types, format);

	while (format[index])
	{
		index_2 = 0;
		while (index_2 < 4)
		{
			if (*format == *functions[index_2].symbol)
			{
				functions[index_2].f(va_types);
				if (format[index + 1] != '\0')
				{
					printf("%c", separator);
				}
				break;
			}
			index_2++;
		}

		index++;
	}
	va_end (va_types);
}

