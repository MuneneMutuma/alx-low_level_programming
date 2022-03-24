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
