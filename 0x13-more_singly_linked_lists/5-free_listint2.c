#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_listint2 - frees a list
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *traverse;

	while (*head != NULL)
	{
		traverse = (*head)->next;
		free(head);
		*head = traverse;
	}
	head = NULL;
}
