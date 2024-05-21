#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of memory to be allocated
 * Return: pointer to the memory address of concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int len_s1, iter;

	if (s1 == NULL)
		len_s1 = 0;
	else
		len_s1 = strlen(s1);

	new_string = malloc(len_s1 + n);

	if (new_string == NULL)
		return (NULL);
	for (iter = 0; iter < (len_s1); iter++)
	{
		new_string[iter] = s1[iter];
	}
	for (iter = 0; iter < n; iter++)
	{
		new_string[len_s1++] = s2[iter];
	}
	new_string[len_s1] = '\0';
	return (new_string);
}

