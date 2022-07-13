#include "main.h"

/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int a, i, x;

	for (a = 0; a < 10; a++)
	{
		for (i = 0; i < 15; i++)
		{
			x = i;
			if (x > 9)
			{
				_putchar(x / 10 + '0');
				x = x % 10;
			}
			_putchar(x + '0');
		}
		_putchar('\n');
	}
}
