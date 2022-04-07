#include <stdlib.h>


int _strlen(char *str);

/**
 * string_nconcat - concats first string with a portion of the second
 *
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes of @s2 to be concatenated to @s1
 *
 * Return: pointer to newly created string if successful
 *	   NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = malloc(_strlen(s1) + n + 1);
	unsigned int i = 0;
	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);

	if (!str)
		return (0);

	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}

	if (n >= len2)
	{
		while (i < len1 + len2)
		{
			str[i] = s2[i - len1];
			i++;
		}
	}

	else
	{
		while (i < len1 + n)
		{
			str[i] = s2[i - len1];
			i++;
		}
	}

	str[i] = '\0';

	if (!str)
		return (0);

	return (str);
}

/**
 * _stlen - finds length of a string
 *
 * @str: pointer to string
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
