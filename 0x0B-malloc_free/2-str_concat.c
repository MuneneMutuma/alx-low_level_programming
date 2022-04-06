#include <stdlib.h>

int _strlen(char *str);

/**
 * str_concat - concatenates two string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string if successful
 *	   NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int i = 0;
	char *concat_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!concat_str)
		return (0);

	while (i < len1)
	{
		concat_str[i] = s1[i];
		i++;
	}

	while (i < (len1 + len2))
	{
		concat_str[i] = s2[i - len1];
		i++;
	}

	concat_str[i] = '\0';

	return (concat_str);
}

/**
 * _strlen - find the length of a string
 *
 * @str: pointer to string
 *
 * Return: length of str
 */
int _strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);

	while (str[i] != '\0')
		i++;

	return (i);
}
