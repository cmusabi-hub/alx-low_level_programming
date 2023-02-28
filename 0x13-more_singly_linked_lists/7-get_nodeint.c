#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node
 * Return: nth node and NULL if node does exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *traverse;

	for (; head != NULL && i < index; i++)
	{
		traverse = head;
		traverse = traverse->next;
	}
	return (traverse);
}
