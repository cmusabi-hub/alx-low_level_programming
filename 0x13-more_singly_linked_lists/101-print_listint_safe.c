#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the head
 * Return: returns number of nodes
 * 	   or exit status 98 .
 */

size_t print_listint_safe(const listint_t *head)
{
	int node = 0;
	listint_t *traverse;

	if (head == NULL)
		exit (98);

	while (head)
	{
		head = traverse;
		traverse = traverse->next;
		node++;
	}
	return (node);
}
