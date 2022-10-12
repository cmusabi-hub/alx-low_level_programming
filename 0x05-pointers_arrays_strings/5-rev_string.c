#include "main.h"
#include <string.h>

/**
 * rev_string - reverse string
 * @s: string tested
 */

void rev_string(char *s)
{
	int i, len = strlen(s);
	char a;

	for (i = len - 1; i >= 0; i--)
	{
		put(s[i]);
	}
}
