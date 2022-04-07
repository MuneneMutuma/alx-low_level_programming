#include <stdlib.h>

/**
 * _calloc - allocates memory for an array in c
 *
 * @nmemb: number of elements of array
 * @size: bytes of each element
 *
 * Return: pointer to allocated memory on success
 *	   NULL if nmemb or size is 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (0);

	str = malloc(nmemb * size);

	if (!str)
		return (0);

	while (i < nmemb * size)
	{
		str[i] = 0;
		i++;
	}

	if (!str)
		return (0);

	return (str);
}
