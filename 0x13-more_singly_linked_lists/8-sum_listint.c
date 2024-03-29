#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * sum_listint - returns sum of all data(n) of a linked list
 * @head: poiter to the head
 * Return: sum of data(n)
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	int i = 0;
	
	if (head == NULL)
		return (0);
	else
	{
		for (;head != NULL; i++)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
}
