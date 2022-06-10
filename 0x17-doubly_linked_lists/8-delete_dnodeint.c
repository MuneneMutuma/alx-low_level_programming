#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *iter;

	if (!*head)
	{
		return (1);
	}


	iter = *head;
	if (index == 0)
	{
		*head = iter->next;
		free(iter);
	}
	
	else
	{
		while (i != index)
		{
			if (!iter->next)
				return (-1);
			iter = iter->next;
			i++;
		}
		if (iter->next)
		{
			(iter->prev)->next = iter->next;
			(iter->next)->prev = iter->prev;
		}
		free(iter);
	}
	return (1);
}
