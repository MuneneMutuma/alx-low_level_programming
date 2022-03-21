int _strlen(char *c);
void _strcpy(char *dest, char *src);

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, strlen;
	char tmp;

	strlen = _strlen(s);
	i = 0;

	while (i < strlen / 2)
	{
		tmp = s[i];
		s[i] = s[strlen - 1 - i];
		s[strlen - 1 - i] = tmp;

		i++;
	}
}

/**
 * _strlen - finds the length of a string
 *
 * @c: string whose length is evaluated
 *
 * Return: int; length of the string @c
 */
int _strlen(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}

	return (i);
}
