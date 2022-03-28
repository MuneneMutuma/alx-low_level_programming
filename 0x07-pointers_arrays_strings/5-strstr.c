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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
		{
			for (j = 0; needle[j] == haystack[i + j]; j++)
				;

			if (needle[j] == '\0')
				return (haystack + i);
		}
	}

	return (0);
}
