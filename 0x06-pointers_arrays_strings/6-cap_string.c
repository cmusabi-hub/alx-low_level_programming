#include "main.h"
#include <stdio.h>

/**
 * cap_string - a function that capitalizes all words of a string
 * @s: string to be tested
 * Return: return value is s
 */

char *cap_string(char *)
{
	sep[] = {'\n', '\t',' ',',', ';', '.', '!', '?', '"', '(', ')', '{','}'};
	int i;

	for (i = 0; s[i] != '0' && s[i] != sep[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
	return (s);
}
