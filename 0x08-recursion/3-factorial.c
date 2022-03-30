#include "main.h"

/**
 * factorial - finds the factorial of a number
 *
 * @n: integer
 *
 * Return: int, n!
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
