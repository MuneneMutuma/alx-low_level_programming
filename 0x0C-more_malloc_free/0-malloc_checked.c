#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - returns pointer to the allocated memory
 *
 * @b: an integer for which we are assigning memory
 *
 * Return: pointer to allocated memory if successful
 *	   98 on fail
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *num;

	num = (void *)malloc(sizeof(b));

	if (!num)
		exit(98);
	return (num);
}
