#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index of a list.
 * @index: index of the node that should be deleted and it starts with 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *traverse, *nextnode;

	traverse = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(traverse);
		return (1);
	}

	if (traverse == NULL)
		return (-1);
	while (i < (index - 1))
	{
		if (traverse->next == NULL)
			return (-1);
		traverse = traverse->next;
		i++
	}
	traverse->next = nextnode;
	traverse->next = nextnode->next;
	free(nextnode);
	return (1);
}
