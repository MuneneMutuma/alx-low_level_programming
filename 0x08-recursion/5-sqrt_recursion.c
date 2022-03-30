int _recurser(int n, int guess);

/**
 * _sqrt_recursion - finds the square root of a number
 *
 * @n: number for which to find square root
 *
 * Return: int - square root of @n
 */
int _sqrt_recursion(int n)
{
	int guess = 0;

	return (_recurser(n, guess));
}

/**
 * _recurser - performs recursion for _sqrt_recursion
 *
 * @n: int to be rooted
 * @guess: guess of the square root
 *
 * Return: square root of n if square root is a natural number
 *	   -1 if square root of n is not a natural number
 */
int _recurser(int n, int guess)
{
	int test;

	test = guess * guess;
	if (test < n)
		return (1 + _recurser(n, guess + 1));
	else if (test == n)
		return (0);
	else if (test != n && test > n)
		return (-(guess + 1));

	return (0);
}
