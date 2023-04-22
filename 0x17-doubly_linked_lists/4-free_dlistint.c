#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to the list to be freed
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
		free(head);
}

