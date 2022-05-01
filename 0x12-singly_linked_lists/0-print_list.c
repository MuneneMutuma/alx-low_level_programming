#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * print_list - prints all elements of a list_t list
 *
 * @h: list of type list_t
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;
	list_t *next_node;

	count = 0;
	next_node = (list_t *)h;
	while (next_node)
	{
		count += 1;
		if (next_node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", next_node->len, next_node->str);
		next_node = next_node->next;
	}

	return (count);
}
