/**
 * _strlen - finds the length of a string
 *
 * @s: string whose length is being evaluated
 *
 * Return: int, length of the string @s
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
