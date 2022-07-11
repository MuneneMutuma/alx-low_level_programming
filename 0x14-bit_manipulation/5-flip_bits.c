#include "main.h"

/**
 * flip_bits - gets number of bits flipped between two numbers
 *
 * @n: number
 * @m: number
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, count;

	xor = n ^ m;
	count = 0;

	while (xor)
	{
		if (xor & 1)
			count++;
		xor = xor >> 1;
	}

	return (count);
}
