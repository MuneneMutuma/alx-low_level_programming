#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees linked list
 *
 * @head: head node of linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current_node;

	current_node = malloc(sizeof(head));
	current_node = head;
	while (current_node->next)
	{
		head = current_node->next;
		free(current_node);
		current_node = head;
	}

	free(current_node);
}
