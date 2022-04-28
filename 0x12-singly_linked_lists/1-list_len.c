#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints length of a list
 *
 * @h: linked list
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	list_t *next_node;
	int count = 0;

	next_node = (list_t *)h;
	while (next_node)
	{
		count += 1;
		next_node = next_node->next;
	}

	return (count);
}
