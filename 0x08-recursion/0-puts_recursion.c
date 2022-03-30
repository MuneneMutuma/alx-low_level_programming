#include "main.h"
/**
 * _puts_recursion - prints a string followed by a newline
 *
 * @s: pointer to string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);

		if (s[1] == '\0')
			_putchar('\n');

		_puts_recursion(s + 1);
	}
}
