#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_list -frees a list
 * @head: pointerto the head of the list
 * Return: return is void
 */

void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head -> next;
		free(node -> str);
		free(node);
		node = head;
	}
}
