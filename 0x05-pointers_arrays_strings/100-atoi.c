/**
 * _atoi - converts string to integer
 *
 * @s: the string to be converted into integer
 *
 * Return: int; integer value of the conversion
 */
int _atoi(char *s)
{
	int i, strlen, negative;
	unsigned int number;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	strlen = i;
	i = 0;
	negative = 0;
	number = 0;

	while (i < strlen)
	{
		if (s[i] == '-')
		{
			negative++;

		}
		while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
		{
			number *= 10;
			number += (s[i] - '0');
			i++;
		}
		if (s[i - 1] >= '0' && s[i - 1] <= '9')
			i = strlen;
		i++;
	}

	if (negative % 2)
		return (-number);
	else
		return (number);
}
