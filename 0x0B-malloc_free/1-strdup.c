#include <stdlib.h>

int _strlen(char *str);

/**
 * _strdup - copies a string into a dynamically allocated string
 *
 * @str: pointer to string to be copied
 *
 * Return: `NULL` if str=NULL
 *	   pointer to duplicated string
 *	   `NULL` if insucfficient memory available
 */
char *_strdup(char *str)
{
	int i;
	char *dup = malloc(sizeof(char) * (_strlen(str) + 1));

	if (!str)
		return (0);

	if (!dup)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}

	return (dup);
}

/**
 * _strlen - finds the length of a string
 *
 * @str: pointer of the string
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int len;

	if (!str)
		return (0);

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
