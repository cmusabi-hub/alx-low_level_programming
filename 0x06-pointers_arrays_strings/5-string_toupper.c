#include "main.h"

/**
 * *string_toupper -  changes lowercase letters of a string to uppercase
 * @str:string tested
 * Return: return value of upper
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
