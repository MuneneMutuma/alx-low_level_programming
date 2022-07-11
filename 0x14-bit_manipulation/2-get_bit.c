#include "main.h"

/**
 * get_bit - gets the bit at a given index in a number
 *
 * @n: number
 * @index: index of which to get bit
 *
 * Return: bit at position index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int ans;

	if (index > 32)
		return (-1);

	ans = (n >> index) & 1;

	return (ans);
}
