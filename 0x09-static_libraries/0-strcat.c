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
