#include "operations.h"

/**
 * add - adds two numbers
 *
 * @a: number
 * @b: number
 *
 * Return: a + b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - adds two numbers
 *
 * @a: number
 * @b: number
 *
 * Return: a - b
 */
int sub (int a, int b)
{
	return (a - b);
}
/**
 * mul - multiplies two numbers
 *
 * @a: number
 * @b: number
 *
 * Return: a * b
 */

int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - divides two numbers
 *
 * @a: number
 * @b: number
 *
 * Return: a / b when b is not 0 else NULL
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}

/**
 * mod - finds modulus of two numbers
 *
 * @a: number
 * @b: number
 *
 * Return: a % b
 */
int mod(int a, int b)
{
	return (a % b);
}
