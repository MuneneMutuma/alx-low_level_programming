#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: head of a linked list
 *
 * Return: head node's data, else 0 if list empty
 */
int pop_listint(listint_t **head)
{
	listint_t *iter;
	int val;

	if (!*head)
		return (0);

	iter = *head;
	*head = (*head)->next;
	val = iter->n;
	free(iter);

	return (val);
}
