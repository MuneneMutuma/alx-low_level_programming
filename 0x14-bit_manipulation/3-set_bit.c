#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets a bit at a certain index to 1
 *
 * @n: number to be set
 * @index: index to be set
 *
 * Return: 1 if successful, -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val;

	if (index > 31)
		return (-1);

	val = (1 << index);
	*n += val;

	if (*n & val)
		return (1);
	return (-1);
}
