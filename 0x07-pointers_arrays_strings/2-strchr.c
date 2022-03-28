/**
 * _strchr - finds the first occurence of a character in a string
 *
 * @s: pointer to the string where we are searching the character
 * @c: the character that is being looked for
 *
 * Return: a pointer to the first occurence of @c
 *	   or NULL when no character is found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
