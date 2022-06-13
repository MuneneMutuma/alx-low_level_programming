#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

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


/**
 * _atoi - converts string to integer
 *
 * @s: the string to be converted into integer
 *
 * Return: int; integer value of the conversion
 */
int _atoi(char *s)
{
	int i, strlen, negative;
	unsigned int number;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	strlen = i;
	i = 0;
	negative = 0;
	number = 0;

	while (i < strlen)
	{
		if (s[i] == '-')
		{
			negative++;

		}
		while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
		{
			number *= 10;
			number += (s[i] - '0');
			i++;
		}
		if (s[i - 1] >= '0' && s[i - 1] <= '9')
			i = strlen;
		i++;
	}

	if (negative % 2)
		return (-number);
	else
		return (number);
}
