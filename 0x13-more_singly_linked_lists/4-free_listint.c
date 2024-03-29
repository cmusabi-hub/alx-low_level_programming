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
	listint_t *traverse;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		traverse = head->next;
		free(head);
		head = traverse;
	}
}
