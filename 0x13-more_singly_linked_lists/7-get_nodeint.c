#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets node at index
 *
 * @head: head of the linked list
 * @index: index to get
 *
 * Return: address of node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *iter;

	if (!head)
		return (NULL);

	for (iter = head; i < index && iter; i++)
		iter = iter->next;

	return (iter);
}
