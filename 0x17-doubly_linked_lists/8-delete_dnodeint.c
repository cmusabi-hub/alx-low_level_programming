#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the list
 * @index: index
 * Return: 1 if success -1 if fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int position = 0;
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (; temp != NULL && position < (index - 1); position++)
	{
		temp = temp->next;
	}
	if (temp->next == NULL)
	{
		temp->prev->next = temp->next;
		temp->prev = temp;
		free(temp);
		return (1);
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}

