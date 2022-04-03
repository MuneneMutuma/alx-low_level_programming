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
