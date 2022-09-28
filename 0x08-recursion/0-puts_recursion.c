#include "main.h"

/**
 *Betty coding style
 */

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s+1);
}
else
_putchar('\n');
}
