#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums all data in a linked list
 *
 * @head: head of a linked list
 *
 * Return: sum of linked list, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *iter;
	int sum;

	if (!head)
		return (0);

	iter = head;
	for (sum = 0; iter; iter = iter->next)
		sum += iter->n;

	return (sum);
}
