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
	unsigned int i, j, counter;
	char tmp1, tmp2;

	counter = 0;
	for (i = 0; accept[i] != '\0'; i++)
	{
		tmp1 = accept[i];
		for (j = 0; s[j] != '\0'; j++)
		{
			tmp2 = s[j];
			if (tmp1 == tmp2)
			{
				counter++;
				tmp1 = '\0';
			}
		}
	}

	return (counter + 1);
}
