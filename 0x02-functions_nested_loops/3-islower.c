#include "main.h"

/**
 * _islower - checks whether a character is lowercase or not
 *
 *@c: character to be tested
 *
 * Return: 1 if character is lowercase
 * 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
