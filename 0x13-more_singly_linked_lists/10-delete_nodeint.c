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

	nextnode = malloc(sizeof(listint_t));
	if (nextnode == NULL)
		return (NULL);
	while (i < (index - 1))
	{
		if (traverse == NULL || traverse->next == NULL)
			return (-1);
		traverse->next = nextnode;
		traverse-next = nextnode->next;
		i++;
		free(nextnode);
	}
	return (1);
}
