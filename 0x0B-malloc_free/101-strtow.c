#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * strtow - converts string to words
 *
 * @str: string
 *
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
	char **array = '\0';
	int size;

	if (!str)
		return (NULL);

	size = count_words(str);
	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char *) * (size + 1));
	if (array == NULL)
		return (NULL);

	array = setup_array(array, str);
	array = fill_array(array, str);

	return (array);
}

/**
 * count_words - counts words as separated by space
 *
 * @str: pointer to string
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int count, i, flag;

	count = 0;
	flag = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 32 && flag == 1)
		{
			flag = 0;
			count++;
		}
		else if (str[i] != 32)
			flag = 1;
	}

	if (flag == 1)
		count++;

	return (count);
}

/**
 * setup_array - mallocs strings in arrays
 *
 * @array: array to store strings
 * @str: string
 *
 * Return: malloced array
 */
char **setup_array(char **array, char *str)
{
	int i, j, len;

	len = 0;
	j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 32 && len > 0)
		{
			array[j] = malloc(sizeof(char) * (len + 1));
			if (!array[j])
			{
				for (; j >= 0; j--)
					free(array[j]);
				return (NULL);
			}
			len = 0;
			j++;
		}
		else if (str[i] != 32)
			len++;
	}

	if (str[i] != 32)
	{
		array[j] = malloc(sizeof(char) * (len + 1));
		if (!array[j])
		{
			for (; j >= 0; j--)
				free(array[j]);
			return (NULL);
		}
	}
	return (array);
}

/**
 * fill_array - fills array with words
 *
 * @array: array of words
 * @str: string
 *
 * Return: @array filled with words
 */
char **fill_array(char **array, char *str)
{
	int len, i, j;

	len = 0;
	j = 0;
	for (i = 0, len = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 32 && len > 0)
		{
			array[j][len] = '\0';
			len = 0;
			j++;
		}
		else if (str[i] != 32)
		{
			array[j][len] = str[i];
			len++;
		}
	}

	if (str[i - 1] == 32)
		array[j] = NULL;
	else
		array[j + 1] = NULL;

	return (array);
}
