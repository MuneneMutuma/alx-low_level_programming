#include "lists.h"
#include <stddef.h>
#include <stdio.h>


/**
 * print_dlistint - prints elements in a linked list
 *
 * @head: head of a double linked list
 *
 * Return: returns the length of linked list
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t n;
	dlistint_t *iter;

	if (!head)
		return (-1);
	iter = (dlistint_t *)head;
	n = 0;
	while (iter->next)
	{
		printf("%d\n", iter->n);
		iter = iter->next;
		n++;
	}
	printf("%d\n", iter->n);
	n++;

	return (n);
}
