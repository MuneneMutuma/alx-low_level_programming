#include "main.h"

/**
 * binary_to_uint - converts binary string to unsigned int
 *
 * @b: binary string
 *
 * Return: value if string is valid binary string, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	char *iter;
	int len, i, bit, bit_value;
	unsigned int value;

	if (!b)
		return (0);
	iter = (char *)b;
	len = _strlen(iter);
	value = 0;
	for (; *iter; iter++, len--)
	{
		bit_value = 1;
		bit = (*iter - '0');

		if (bit != 0 && bit != 1)
			return (0);
		if (bit == 0)
			continue;
		for (i = len - 1; i > 0 && bit == 1; i--)
		{
			bit_value *= 2;
		}
		value += bit_value;
	}
	return (value);
}

/**
 * _strlen - finds length of string
 *
 * @b: pointer to string
 *
 * Return: length of string
 */
int _strlen(char *b)
{
	char *iter;
	int i;

	for (iter = b, i = 0; *iter; iter++, i++)
		;

	return (i);
}
