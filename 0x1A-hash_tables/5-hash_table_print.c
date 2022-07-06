#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * hash_table_print - a function that prints a hash table
 *
 * @ht: hash table
 *
 * Return: void always
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **current, *iter;
	unsigned long int i;
	int flag;

	if (!ht)
	{
		return;
	}

	printf("{");
	iter = NULL;
	flag = 0;
	for (current = ht->array, i = 0; current && i < ht->size; current++, i++)
	{
		if (*current)
			iter = *current;
		else
			continue;
		if (iter)
		{
			while (iter)
			{
				if (flag)
					printf(", ");
				printf("'%s': '%s'", iter->key, iter->value);
				iter = iter->next;
				flag = 1;
			}
		}
	}
	printf("}\n");
}
