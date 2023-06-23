#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated space
 * @str: string
 * Return: string str
 */

char *_strdup(char *str)
{
	size_t i;
	char *stri_ng;

	stri_ng = malloc(sizeof(char) * (strlen(str)));

	if (stri_ng == NULL)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
	{
		stri_ng[i] = str[i];
	}
	stri_ng[i] = '\0';
	return (stri_ng);
}

