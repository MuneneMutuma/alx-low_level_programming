#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *
 * @head: new head of the list
 * @str: a string
 *
 * Return: address of new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	if (!*head)
		return (NULL);
	return (*head);
}
