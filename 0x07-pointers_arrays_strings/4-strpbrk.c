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

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (s + i);
}
