#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all elements in a list
 * @h: list to be printed
 * Return:  number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t _node = 0;

	while (h != NULL))
	{
		printf ("%d", h->n);
		h = h->next;
		node++;
	}
	return (_node);
}
