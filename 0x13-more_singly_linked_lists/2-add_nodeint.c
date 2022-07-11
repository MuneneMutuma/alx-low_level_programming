#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node at the beginning of a list
 *
 * @head: head of list
 * @n: integer element
 *
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}
