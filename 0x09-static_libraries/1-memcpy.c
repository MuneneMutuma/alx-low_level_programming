/**
 * _memcpy - copies n memory values from source to destination
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: the number of characters being copied
 *
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
