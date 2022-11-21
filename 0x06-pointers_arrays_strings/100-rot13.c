#include "main.h"

/**
 * rot13 - function that encodes string using rot13
 * @s: string tested
 * Return: return value of s
 */

char *rot13(char *s)
{
	int i;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == s1[i])
		{
			s[i] = s2[i];			
		}
	}
	return (s);
}
