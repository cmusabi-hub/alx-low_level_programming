#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter tested
 */

void rev_string(char *s)
{
	int len = 0, len_2 = 0;
	char str[len_2];

	for (; len >= 0 && s[len] != '\0'; len++)
		;
	for (; s[len]; len--)
		str[len] = s[len];
	*s = str;

}

