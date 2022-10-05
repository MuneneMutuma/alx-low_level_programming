#include <stdio.h>
#include "search_algos.h"

int _binary_search(int *array, size_t lower, size_t upper, int value);

/**
 * exponential_search - performs exponential search
 *
 * @array: sorted array in ascending order
 * @size: size of the array
 * @value: value to be checked
 *
 * Return: index if value is found, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, index;

	i = 1;
	index = -1;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	if (i >= size)
		index = _binary_search(array, i / 2, size - 1, value);
	else
		index = _binary_search(array, i / 2, i, value);

	return (index);
}

/**
 * _binary_search - binary search algorithn
 *
 * @array: ascending array
 * @lower: lower index of array
 * @upper: upper index of array
 * @value: value to be checked for
 *
 * Return: index of value if found, -1 otherwise
 */
int _binary_search(int *array, size_t lower, size_t upper, int value)
{
	size_t index;

	printf("Value found between indexes [%ld] and [%ld]\n", lower, upper);

	index = (lower + upper) / 2;
	for (; lower <= upper; index = (upper + lower) / 2)
	{
		printf("Searching in array: ");
		print_array(array, lower, upper);
		printf("\n");
		if (array[index] == value)
			return ((int)index);
		else if (array[index] < value)
			lower = index + 1;
		else if (array[index] > value)
			upper = index - 1;
	}

	return (-1);
}

/**
 * print_array - prints array
 *
 * @array: array to be printed
 * @start: start index for printing
 * @end: end index for printing
 *
 * Return: void
 */
void print_array(int *array, int start, int end)
{
	int i;

	for (i = start; i < end + 1; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
}
