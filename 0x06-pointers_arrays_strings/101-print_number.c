#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: int to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int len, n_copy, digit;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar(n + '0');

	len = 1;

	n_copy = n;
	while (n_copy > 0)
	{
		n_copy = n_copy / 10;
		len *= 10;
	}

	for (len /= 10; len > 0; len /= 10)
	{
		digit = n / len;
		n = n - (digit * len);
		_putchar(digit + '0');
	}
}
