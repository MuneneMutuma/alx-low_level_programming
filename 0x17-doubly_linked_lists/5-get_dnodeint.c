#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - gets node at given index
 *
 * @head: head of the list
 * @index: index of the node you want
 *
 * Return: pointer to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *iter;

	if (!head)
		return (NULL);

	iter = head;
	while (i != index)
	{
		if (iter == NULL)
			return (NULL);
		iter = iter->next;
		i++;
	}

	return (iter);
}
