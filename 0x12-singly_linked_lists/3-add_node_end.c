#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node_end - adds a new node to the end of a list_t list
 *
 * @head: the head of the list
 * @str: string
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *iter_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	iter_node = *head;
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}

	else
	{
		while (iter_node->next)
			iter_node = iter_node->next;

		new_node->next = iter_node->next;
		iter_node->next = new_node;
	}

	if (!new_node)
		return (NULL);

	return (new_node);
}
