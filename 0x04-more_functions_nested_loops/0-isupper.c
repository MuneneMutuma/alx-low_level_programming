#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if char is upper
 *
 * @c: character
 *
 * Return: 1 if upper, else 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
