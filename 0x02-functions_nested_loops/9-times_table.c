#include "main.h"

/**
 * times_table - prints out the 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int product = i * j;

			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				if (product < 10)
					_putchar(' ');
				else
					_putchar((product / 10) + '0');
				
				_putchar((product % 10) + '0');
				if (j != 9)
					_putchar(',');
			}
		}
		_putchar('\n');

	}
}
