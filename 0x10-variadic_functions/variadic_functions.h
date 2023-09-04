#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
#include <stdarg.h>
typedef struct print_char
{
	char *symbol;
	void (*f)(va_list arg);
} print_arg;

#endif /*_VARIADIC_FUNCTIONS_H_*/
