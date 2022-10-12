#include "main.h"
#include <string.h>

/**
 * rev_string - reverse string
 * @s: string tested
 */

void rev_string(char *s)
{
	int i, len = strlen(s);
	char a = s[i];

	for (i = len - 1; i >= 0; i--)
	{
		a = s[i];
	}
}
