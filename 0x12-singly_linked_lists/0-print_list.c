#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_list - prints all the elements of a list_t
 * @h: pointer to the node
 * Return: Number of nodes print [0] (nil) if str is NULL
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
	{
		if (h -> str == NULL)
			printf("[0] (nil)");
	}
	return (i);
}
