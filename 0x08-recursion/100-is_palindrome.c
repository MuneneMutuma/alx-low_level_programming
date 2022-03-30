int _strlen_recursion(char *s);
int palindrome_recurser(char *s, int i, int len);

/**
 * is_palindrome - checks whether a string is a palindrome
 *
 * @s: pointer to string
 *
 * Return: 1 if a string is a palindrome
 *	   0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	return (palindrome_recurser(s, 0, len));
}

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer to string
 *
 * Return: int, length of string
 */
int _strlen_recursion(char *s)
{
	int ans;

	if (s[0] == '\0')
		ans = 0;
	if (s[0] != '\0')
		ans = 1 + _strlen_recursion(s + 1);

	return (ans);
}


/**
 * palindrome_recurser - recurser for palindrome
 *
 * @s: string to be tested for palindrome
 * @i: starting index; should be set to 0 in `is_palindrome`
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int palindrome_recurser(char *s, int i, int len)
{
	if (i > (len - i - 1))
		return (1);
	if (s[i] == s[len - i - 1] && i <= (len - i - 1))
		return (1 * palindrome_recurser(s, i + 1, len));

	return (0);
}
