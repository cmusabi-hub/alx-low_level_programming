#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * listint_len - returns number of elements in a linked list
 * @h: head of the list
 * Return: return number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		h = h -> next;
		element++;
	}
	return (element);
}
