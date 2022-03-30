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
	{
		ans = 1 + _strlen_recursion(s + 1);
	}

	return (ans);
}
