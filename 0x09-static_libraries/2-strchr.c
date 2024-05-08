#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string pointed to
 * @c: character to be located
 * Return: poiter to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	if (s)
	{
		while (*s != '\0')
		{
			if (*s == c)
				return (s);
			s++;
		}
	}
	return ('\0');
}

