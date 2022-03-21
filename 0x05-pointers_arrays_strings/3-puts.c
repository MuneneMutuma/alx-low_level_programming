#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @str: string that is to be printed out
 *
 * Return: void
 */
void _puts(char *str)
{
	int strlen, i;

	strlen = 0;
	i = 0;

	while (str[i] != '\0')
	{
		strlen++;
		i++;
	}
	
	i = 0;
	while (i < strlen)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
