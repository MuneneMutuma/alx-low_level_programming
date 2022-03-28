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

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (!accept[j])
			return (i);

	}

	return (i);
}
