#include "main.h"

/**
 * clear_bit - sets bit at index to 0
 *
 * @n: pointer to number
 * @index: index to be cleared
 *
 * Return: -1 if failed, 1 if successful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val;

	val = 1 << index;
	if (*n && val)
		*n = *n - val;

	if ((*n && val) == 0)
		return (1);
	return (-1);
}
