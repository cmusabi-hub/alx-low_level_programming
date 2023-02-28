#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of the list.
 * @idx: index of the list where the new node should be added starts at 0.
 * @n: data to be added;
 * Return: address of newnode.
 * 	   NULL if failed.
 * 	   if not possible to add new node at idx do not add new node and return NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *traverse;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	
	if (*head == NULL)
		return (NULL);
}
