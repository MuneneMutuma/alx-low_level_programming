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

	return (dest);
}
