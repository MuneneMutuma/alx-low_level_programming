#include "main.h"

/**
 * _isupper - checks if char is upper
 *
 * @c: character
 *
 * Return: 1 if upper, else 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}

/**
 * _isdigit - checks if a number is a digit
 *
 * @c: integer
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

/**
 * _islower - checks whether a character is lowercase or not
 *
 *@c: character to be tested
 *
 * Return: 1 if character is lowercase
 * 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}

/**
 * _isalpha - checks whether a character is alphabetic
 *
 * @c: character to be checked
 *
 * Return: 1 if c is a letter
 * 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: integer to be checked
 *
 * Return: absolute value of an integer
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
