#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - frees a double linked list
 *
 * @head: head of the list
 *
 * Return: void always
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (head == NULL)
	{
		exit(EXIT_SUCCESS);
	}

	else
	{
		while (head->next)
		{
			next = head->next;
			free(head);
			head=next;
		}
		free(head);
	}
}
