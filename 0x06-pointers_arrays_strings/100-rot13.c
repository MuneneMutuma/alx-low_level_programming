#include <stdio.h>

/**
 * rot13 - performs ROT-13 encryption on a string
 *
 * @str: pointer to string being converted
 *
 * Return: pointer to encrypted string
 */
char *rot13(char *str)
{
	int i, j;
	char original[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char coded[] =    "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == original[j])
			{
				str[i] = coded[j];
				break;
			}
		}
	}
	return (str);
}
