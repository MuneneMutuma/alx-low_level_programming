#include "main.h"

/**
 * print_triangle - prints a triangle with n slashes
 *
 * @n: size of triangle
 *
 * Return: void
 */
void print_triangle(int n)
{
	int i, a;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (a = 0; a < n - (i + 1); a++)
				_putchar(' ');
			for (a = 0; a < i + 1; a++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
