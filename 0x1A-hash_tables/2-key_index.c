#include "hash_tables.h"

/**
 * key_index - gives index to key
 *
 * @key: hash key (from djb2 algorithm)
 * @size: size of array
 *
 * Return: key of index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	value = hash_djb2(key) % size;

	return (value);
}
