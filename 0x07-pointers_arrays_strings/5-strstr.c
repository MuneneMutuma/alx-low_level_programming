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
