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

	if (ht == NULL)
		return (0);

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

	node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	iter(index, &ht, key, &node);
	return (1);
}

/**
 * iter - iterates through index position linked list of hash table
 *
 * @index: index of the list
 * @ht: hash table
 * @key: key value to be inserted
 * @node: node to be inserted
 *
 * Return: void
 */
void iter(int index, hash_table_t **ht, const char *key, hash_node_t **node)
{
	hash_node_t *prev, *current;

	prev = NULL;
	if ((*ht)->array + index)
	{
		current = *((*ht)->array + index);
		while (current && strcmp(current->value, key) != 0)
		{
			prev = current;
			current = current->next;
		}
		if (current != NULL)
		{
			prev->next = current->next;
			free(current);
		}

		(*node)->next = *((*ht)->array + index);
		(*ht)->array[index] = *node;
	}
	else
		(*ht)->array[index] = *node;
}
