#include "main.h"
/**
 * puts2 - prints every other cahracter of a string,
 * starting with the first character, followed by a newline
 *
 * @str: the string under the operation of the function `puts2`
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, strlen;

	strlen = 0;
	while (str[strlen] != '\0')
	{
		strlen += 1;
	}

	i = 0;
	while (i <= strlen)
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
