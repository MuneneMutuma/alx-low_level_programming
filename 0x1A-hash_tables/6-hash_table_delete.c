#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next, *iter, **array;
	unsigned long int i;

	if (!ht)
		return;

	for (array = ht->array, i = 0; array && i < ht->size; array++, i++)
	{
		if (*array)
		{
			iter = *array;
		}
		else
		{
			continue;
		}

		if (iter)
		{
			while (iter)
			{
				next = iter->next;
				free(iter->key);
				free(iter->value);
				free(iter);
				iter = next;
			}
		}
	}

	free(ht->array);
	free(ht);
}
