#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at index
 *
 * @head: head of the list
 * @idx: index to be inserted
 * @n: value of the node
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *iter, *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	if (!*head)
	{
		node->next = NULL;
		*head = node;
		return (node);
	}

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}

	iter = *head;
	for (i = 0; i < idx - 1 && iter; i++)
		iter = iter->next;

	if (iter)
	{
		node->next = iter->next;
		iter->next = node;
		return (node);
	}

	return (NULL);
}
