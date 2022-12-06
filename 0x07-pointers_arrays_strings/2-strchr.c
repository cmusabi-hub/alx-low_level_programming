#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: string tested
 * @c: character in the string
 * Return: pointer to the first occurance in s with c or null character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (s[i] == c)
		return(s + i);
	return (0);
}
