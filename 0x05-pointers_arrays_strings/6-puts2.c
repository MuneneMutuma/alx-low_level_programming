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
	int i;

	i = 0;
	while (str[i] != '\0' && str[2 * i] != '\0')
	{
		_putchar(str[2 * i]);
		i += 1;
	}

	_putchar('\n');
}
