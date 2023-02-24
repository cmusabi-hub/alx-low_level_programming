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
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	while(new != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
