#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - adds node at a given index
 *
 * @h: head of the list
 * @idx: index
 * @n: value of node
 *
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *iter, *new;

	if (!h)
		return (NULL);

	iter = *h;
	new = malloc(sizeof(dlistint_t));

	if (idx == 0)
		new = add_dnodeint(&iter, n);
	else
	{
		while (i != idx - 1)
		{
			if (!iter->next)
			{
				new = add_dnodeint_end(&iter, n);
				return (new);
			}
			iter = iter->next;
			i++;
		}
		new->n = n;
		new->next = iter->next;
		new->prev = iter;
		iter->next = new;
	}
	return (new);
}


