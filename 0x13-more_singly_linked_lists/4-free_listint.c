#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 *
 * @head: head of a linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *now, *next;

	if (!head)
		return;

	now = head;
	next = now->next;
	while (next)
	{
		free(now);
		now = next;
		next = now->next;
	}
	free(now);
	free(next);
}
