#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *iter, *new;

	iter = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = (int)n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		while (iter->next)
			iter = iter->next;
		iter->next = new;
		new->prev = iter;
		new->next = NULL;
	}
	return (new);
}
