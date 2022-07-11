#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of a number
 *
 * @n: decimal number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, flag;
	unsigned long int bin = 1;

	flag = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; n > bin; i++)
	{
		bin *= 2;
	}

	for (; bin > 0; i--, bin >>= 1)
	{
		if (n >= bin)
		{
			_putchar('1');
			n -= bin;
			flag = 1;
		}
		else
		{
			if (flag == 1)
				_putchar('0');
			else
				continue;
		}
	}
}
