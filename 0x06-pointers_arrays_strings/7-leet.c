/**
 * leet - converts text into 1337
 *
 * @str: string to be converted
 *
 * Return: pointer to the converted string
 */
char *leet(char *str)
{
	int i, j;
	char code[5][3] = { {'a', 'A', '4'},
			{'e', 'E', '3'},
			{'o', 'O', '0'},
			{'t', 'T', '7'},
			{'l', 'L', '1'},
			};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == code[j][0] || str[i] == code[j][1])
			{
				str[i] = code[j][2];
			}
		}
	}

	return (str);
}
