#include "lists.h"
#include <stddef.h>

size_t dlistint_len(const dlistint_t *h)
{
	size_t length;
	dlistint_t *iter;

	if (h == NULL)
		return (0);
	iter = (dlistint_t *)h;
	length = 0;
	while (iter->next)
	{
		length++;
		iter = iter->next;
	}
	length++;
	return (length);
}
