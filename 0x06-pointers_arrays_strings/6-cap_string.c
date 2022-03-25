/**
 * cap_string - camelcases words separated by
 *		, ; . ! ? " ( ) { }
 *
 * @str: the string to be camelcased
 *
 * Return: pointer to the camelcased string
 */
char *cap_string(char *str)
{
	int i, sep;
	char separator[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (sep = 0; separator[sep] != '\0'; sep++)
		{
			if (str[i] == separator[sep] && str[i + i] <= 'z' && str[i + 1] >= 'a')
				str[i + 1] -= 32;
		}
	}
	if (str[0] <= 'z' && str[0] >= 'a')
		str[0] -= 32;
	return (str);
}
