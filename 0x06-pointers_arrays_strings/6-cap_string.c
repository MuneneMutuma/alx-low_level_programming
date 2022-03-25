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
		for (sep = 0; sep < 13; sep++)
		{
			if (str[i] == separator[sep] && str[i + i] <= 122 && str[i + 1] >= 97)
				str[i + 1] = (str[i + 1] - 32) + '\0';
		}
	}
	return (str);
}
