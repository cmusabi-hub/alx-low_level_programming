#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end -adds new node at the end of a list.
 * @head: Head of the list.
 * @n: data to be added.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *traverse;
	
	newnode = malloc(sizeof(listint_t));

	newnode->n = n;
	newnode->next = NULL;

	if (traverse == NULL)
		return (NULL);
	else
	{
		traverse->next = newnode;
		*head = traverse;
	}
	return (*head);
}
