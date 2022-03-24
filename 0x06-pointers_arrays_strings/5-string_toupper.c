/**
 * string_toupper - converts string to upper
 *
 * @str: string to be converted to uppercase
 *
 * Return: pointer to @s after converting it to upper
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = (str[i] - 32);
		}
	}

	return (str);
}
