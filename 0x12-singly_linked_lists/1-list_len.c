#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * list_len - returns the number of elements in the list
 * @h: node to be printed
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	for (; h != NULL; node++)
	{
		printf ("-> %li elements", node);
		h = h ->next;
	}

	return (node);
}
