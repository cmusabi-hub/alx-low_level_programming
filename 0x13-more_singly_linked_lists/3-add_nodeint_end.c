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
	
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	traverse = *head;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (traverse->next != NULL)
		{
			traverse = traverse->next;
			rtraverse->next = newnode;
		}
	}
	return (*head);
}
