#include "lists.h"

/**
 * sum_dlistint - retrurns the sum of all the data (n) of a list.
 * @head: pointer to the list
 * Return: 0 if list is empty or sum of data.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0, node  = 0, num = temp->n;

	if (head == NULL)
		return (0);

	for (; temp != NULL; node++)
	{
		temp = temp->next;
		sum += num;
	}
	return (sum);
}

