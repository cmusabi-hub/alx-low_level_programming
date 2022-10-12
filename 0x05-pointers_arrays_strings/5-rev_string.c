#include "main.h"
#include <string.h>

/**
 * rev_string - reverse string
 * @s: string tested
 */

void rev_string(char *s)
{
	int i;
	char a;

	for (i = (strlen(s) -1); i >= 0; i--)
	{
		a = s[strnlen(s)] - 1);
		s[stnlen(s)-1] = a;
	}
}
