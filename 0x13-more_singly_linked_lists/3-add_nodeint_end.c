#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node to the end of a linked list
 *
 * @head: head of linked list
 * @n: value of node
 *
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *iter, *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	iter = *head;
	if (iter)
	{
		while (iter->next)
			iter = iter->next;

		iter->next = node;
	}

	else
		*head = node;
	node->next = NULL;

	return (node);
}
