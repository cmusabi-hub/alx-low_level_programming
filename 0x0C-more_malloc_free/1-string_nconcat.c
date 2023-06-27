#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to be copied
 * Return: a concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len_s1 = 0, len_s2 = 0;
	char *concat_string;
	concat_string = malloc(sizeof(char) * (len_s1 + n + 1));

	if (s1 != NULL)
		len_s1 = strlen(s1);
	if (s2 != NULL)
		len_s2 = strlen(s2);

	if (n >= len_s2)
		n = len_s2;
	if (concat_string == NULL)
		return (NULL);
	
	for (i = 0; i < len_s1; i++)
		concat_string[i] = s1[i];
	for (i = 0; i < n; i++)
		concat_string[len_s1 + i] = s2[i];
	concat_string[len_s1 + i] = '\0';

	return (concat_string);
}

