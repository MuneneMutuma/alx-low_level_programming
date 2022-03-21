#include "main.h"

/**
 * puts_half - prints out the last half of a string
 *
 * @str: string whose half is printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, strlen;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	strlen = i;
	if (i % 2)
		i = (i + 1)/ 2;
	else
		i = i / 2;
	while (i < strlen)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
