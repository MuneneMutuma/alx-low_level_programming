#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at a given index
 *
 * @head: head of a linked list
 * @index: index of a linked list
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *iter, *del;

	iter = *head;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		if (*head != NULL)
			*head = (*head)->next;
		free(iter);
		return (1);
	}
	for (i = 0; i < index - 1 && iter; i++)
		iter = iter->next;

	if (iter == NULL)
		return (-1);

	if (iter->next)
	{
		del = iter->next;
		iter->next = del->next;
		free(del);
	}
	return (1);
}
