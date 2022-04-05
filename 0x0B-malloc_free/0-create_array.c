#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 *		  and initializes it with a specific char
 *
 * @size: size of array
 * @c: initialization char
 *
 * Return: `NULL` if @size is 0
 *	    pointer to array if okay, NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));

	if (size == 0)
		return (0);

	while (size--)
	{
		arr[size] = c;
	}

	return (arr);
}
