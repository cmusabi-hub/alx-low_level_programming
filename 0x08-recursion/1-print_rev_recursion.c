#include "main.h"

/**
 *Prints a string in reverse
 */

void _print_rev_recursion(char*s)
{
  if (*s)
    {
      _print_rev_recursion(s+1);
      _putchar(*s);
    }
}
