#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_set - sets a value to a key in a hash table
 *
 * @ht: hash table that has been created
 * @key: key value for the new entry
 * @value: value for the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);

	node->key = strdup(key);
	if (strlen(value))
		node->value = strdup(value);
	else
		node->value = "";

	index = key_index((const unsigned char *)key, ht->size);
	if ((ht->array + index))
	{
		node->next = *(ht->array + index);
		ht->array[index] = node;
	}
	else
		ht->array[index] = node;

	return (1);
}
