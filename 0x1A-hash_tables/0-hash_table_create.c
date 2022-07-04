#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table struct
 *
 * @size: size of the array
 *
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t *head;

	hash_table = malloc(sizeof(hash_table_t));
	head = malloc(sizeof(hash_node_t));

	if (head == NULL || hash_table == NULL)
		return (NULL);

	hash_table->array = &head;
	hash_table->size = size;

	return (hash_table);
}
