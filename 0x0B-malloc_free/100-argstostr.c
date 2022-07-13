#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program
 *
 * @ac: no of arguments
 * @av: array of arguments
 *
 * Return: pointer to string
 */
char *argstostr(int ac, char **av)
{
	char *str, *tmp;
	int size, i, x, a;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 0;
	for (i = 0; i < ac; i++)
	{
		tmp = av[i];
		for (x = 0; tmp[x] != '\0'; x++)
			;
		size += (x + 1);
	}

	str = malloc(sizeof(char) * (size + 1));

	if (!str)
		return (NULL);

	for (i = 0, a = 0; i < ac; i++)
	{
		tmp = av[i];
		for (x = 0; tmp[x] != '\0'; x++, a++)
			str[a] = tmp[x];

		str[a] = '\n';
		a++;
	}

	str[a] = '\0';

	return (str);
}
