#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * hash_table_get - gets a value that is inside hash table with @key
 *
 * @ht: hash table
 * @key: key for hashing
 *
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;
	char *value;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	value = NULL;
	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			value = head->value;
			break;
		}
		head = head->next;
	}

	return (value);
}
