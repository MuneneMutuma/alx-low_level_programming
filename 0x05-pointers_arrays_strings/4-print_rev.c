#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: the string to be printed in reverse
 *
 */
void print_rev(char *s)
{
	int i, strlen;

	i = 0;
	strlen = 0;
	while (s[i] != '\0')
	{
		strlen++;
		i++;
	}

	while (strlen > 0)
	{
		_putchar(s[strlen - 1]);
		strlen--;
	}

	_putchar('\n');
}
