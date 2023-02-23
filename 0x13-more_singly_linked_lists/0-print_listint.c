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
	size_t node = 0;
	listint_t *new;

	for (; new != NULL; node++)
	{
		printf("%d", new->n);
		new = new->next;
		new = h;
	}
	return(node);
}
