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
		a = s[i];
		s[i] = s[strlen(s) -i - 1];
		s[strlen(s) - i - 1] = a;
	}
}
