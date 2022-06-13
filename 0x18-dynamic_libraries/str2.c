/**
 * _strcmp - compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: the numerical difference of the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;

	if (s1[i] == '\0' && s2[i] != '\0')
		return (0 - s2[i]);

	else if (s1[i] != '\0' && s2[i] == '\0')
		return (s1[i]);

	return (s1[i] - s2[i]);
}

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

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}

/**
 * _strstr - locates a substring
 *
 * @haystack: pointer to bigger string
 * @needle: pointer to substring
 *
 * Return: pointer to beginning of substring if found
 *	   NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = 0; needle[j] > '\0' && haystack[i + j] > '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}

	return (0);
}

/**
 * _strpbrk - searches for a string for any set of bytes
 *
 * @s: pointer to string where we are checking
 * @accept: pointer to string
 *
 * Return: pointer to character in @s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return ('\0');
}

/**
 * _strspn - gets te length of a prefix substring.
 *
 * @s: initial segment s
 * @accept: prefix substring
 *
 * Return: unsigned int, number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (!accept[j])
			return (i);

	}

	return (i);
}
