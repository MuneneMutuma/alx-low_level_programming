/**
 * _strlen - finds the length of a string
 *
 * @s: string whose length is being evaluated
 *
 * Return: int, length of the string @s
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}


/**
 * _strcpy - copies the string @src to @dest
 *
 * @src: source string
 * @dest: destination
 *
 * Return: char * - a char pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strcat - concatenates two strings
 *
 * @dest: the string onto which @src is concatenated
 * @src: the string which is being concatenated to @dest
 *
 * Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i, length;

	length = 0;
	while (dest[length] != '\0')
		length++;

	i = 0;
	while (src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}

	dest[length + i] = '\0';

	return (dest);
}

/**
 * _strncat - copies at most n bytes from @src to @dest
 *
 * @dest: the string onto which the n bytes are copied from @src
 * @src: the source string from where the n bytes are copied
 * @n: the number of bytes to be copied from @src to @dest
 *
 * Return: pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';

	return (dest);
}

/**
 * _strncpy - copies the first @n characters of @src to @dest
 *
 * @dest: the string into which we are copying
 * @src: the string from which we are copying
 * @n: the number of characters(bytes) which we are copying
 *
 * Return: pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
