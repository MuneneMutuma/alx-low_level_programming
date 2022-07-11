#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - gets length of listint
 *
 * @h: pointer to listint
 *
 * Return: size_t: length of linked list
 */
size_t listint_len(const listint_t *h)
{
	listint_t *iter;
	size_t len;

	iter = (listint_t *)h;
	for (len = 0; iter; iter = iter->next, len++)
		;

	return (len);
}
