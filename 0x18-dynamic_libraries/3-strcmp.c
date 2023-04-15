#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: char
 * @s2: char
 * Return: j.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	for (; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++)

	if (s1[i] != s2[i])
		j = s1[i] - s2[i];

	return (j);
}
