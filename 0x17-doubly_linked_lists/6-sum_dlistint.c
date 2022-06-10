#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - adds all the elements in a double linked list
 *
 * @head: head of the list
 *
 * Return: sum of all elements
 */
int sum_dlistint(dlistint_t *head)
{
	int c = 0;
	dlistint_t *iter;

	if (head == NULL)
		return (0);

	iter = head;

	while (iter->next)
	{
		c += iter->n;
		iter = iter->next;
	}

	c += iter->n;

	return (c);
}
