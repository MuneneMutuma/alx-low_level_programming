#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints elements in a listint
 *
 * @h: head of listint
 *
 * Return: size_t, length of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	listint_t *iter;

	iter = (listint_t *)h;

	for (i = 0; iter; iter = iter->next, i++)
		printf("%d\n", iter->n);

	return (i);
}
