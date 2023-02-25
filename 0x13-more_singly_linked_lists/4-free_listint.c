#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_listint - frees a list.
 * @head: head of the list
 * Return: return is void
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free(head->n);
		free(head);
	}
}
