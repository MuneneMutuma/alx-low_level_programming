#include "main.h"

/**
 * print_times_table - prints times table of n if n is between 0 and 15
 * @n: number of the times table we are printing
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int product = i * j;

				printer(product, j, n);
			}
			_putchar('\n');
		}
	}
}


/**
 * printer - utility function for printing
 *
 * @product: product to be printed
 * @j: inner limit
 * @n: number
 *
 * Return: void
 */
void printer(int product, int j, int n)
{
	if (j == 0)
		_putchar(j + '0');

	if ((product / 100) > 0)
	{
		int hundreds = product / 100;
		int tens = ((product % 100) - (product % 10)) / 10;
		int ones = (product % 10);

		_putchar(hundreds + '0');
		_putchar(tens + '0');
		_putchar(ones + '0');
	}

	else if ((product / 10) > 0 && (product / 100) == 0)
	{
		int tens = product / 10;
		int ones = product % 10;

		_putchar(' ');
		_putchar(tens + '0');
		_putchar(ones + '0');
	}
	else if ((product >= 0) && j != 0 && product < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(product + '0');
	}
	if (j != n)
	{
		_putchar(',');
		_putchar(' ');
	}
}
