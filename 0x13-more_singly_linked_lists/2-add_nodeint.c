#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint - adds node at the beginning of a list.
 * @n: integer constant to be copied to the list.
 * Return: addres of the new element of Null if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (new != NULL)
		return (NULL);
	else
	{
		new->n = n;
		new = new->next;
		*head = new;
	}
	return (*head);
}
