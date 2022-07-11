#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list and sets head to NULL
 *
 * @head: head of a linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *now, *next;

	if (!head)
		return;

	now = *head;
	next = now->next;
	while (next)
	{
		free(now);
		now = next;
		next = now->next;
	}
	free(now);
	free(next);
	*head = NULL;
}
