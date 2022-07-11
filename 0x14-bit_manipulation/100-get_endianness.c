#include "main.h"
#include <stdio.h>

/**
 * get_endianness - gets an endianness of a system
 *
 * Return: 0 if Big Endian, 1 if Little Endian
 */
int get_endianness(void)
{
	int i;
	char x;

	i = 0x01234567;
	x = ((char *)&i)[0];
	if (x == 0x01)
		return (0);
	else
		return (1);
}
