int _prime_recurser(int n, int i);

/**
 * is_prime_number - checks whether a number is prime
 *
 * @n: number in question
 *
 * Return: 1 if @n is prime
 *	   0 otherwise
 */
int is_prime_number(int n)
{
	return (_prime_recurser(n, 2));
}

/**
 * _prime_recurser - recursive formula for `is_prime_number`
 *
 * @n: number to be checked for primality
 * @i: starting point
 *
 * Return:	1 if @n is prime
 *		0 otherwise
 */
int _prime_recurser(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n == i)
		return (1);
	else if (i < n && n % i == 0)
		return (0);
	return (1 * _prime_recurser(n, i + 1));
}
