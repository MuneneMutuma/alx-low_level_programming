#include <stdio.h>
/**
 * print_array - prints @n elements of an array of integers @a
 *
 * @a: array of integers
 * @n: number of elements of array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", *(a + i));
		i++;
		if (i < n)
			printf(", ");
	}
	printf("\n");
}
