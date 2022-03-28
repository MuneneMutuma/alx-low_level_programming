#include <stdio.h>

/**
 * print_diagsums -prints the sum of the two diagonals of a square matrix of integers
 *
 * @a: pointer to square matrix
 * @size: size of the square matrix
 *
 * Return:void
 */
void print_diagsums(int *a, int size)
{
	int i, index_a, index_b, sum_a, sum_b;

	sum_a = 0;
	sum_b = 0;
	for (i = 0; i < size; i++)
	{
		index_a = size * (i) + i;
		sum_a += a[index_a];
		index_b = (size - (i +1)) * size + (i);
		sum_b += a[index_b];
	}
	printf("%d,   %d\n", sum_a, sum_b);

}
