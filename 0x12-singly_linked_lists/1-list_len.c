#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - returns the number of elements in a linked list_t
 * @h : singly linked list
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	for (; h != NULL; n++)
	{
		h = h -> next;
	}
	return (n);
}
