#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t
 * @h: list to be printed
 * @list_t: struct type
 * Return: number of nodes
 * if str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	for (; h != NULL; node++)
	{
		if (h -> str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h -> len, h -> str );
		h = h -> next;
	}
	return (node);
}
