#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t linked list
 * @head: pointer to the list
 * @index: index
 * Return: 1 if success -1 if fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int position = 0;
	dlistint_t *temp = *head;

	if (head == 0)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (temp == NULL)
		return (-1);
	for (; temp != NULL && position < (index - 1); position++)
	{
		temp = temp->next;
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}

