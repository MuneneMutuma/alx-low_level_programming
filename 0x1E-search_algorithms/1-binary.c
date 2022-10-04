#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - performs a binary search
 *
 * @array: an array to be searched
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: index of value if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int first, last, index;

	first = 0;
	last = (int)size - 1;
	index = (int)(first + last) / 2;

	if (array == NULL)
		return (-1);
	for (; last >= first; index = (first + last) / 2)
	{
		printf("Searching in array: ");
		print_array(array, first, last);
		printf("\n");
		if (value == array[index])
			return (index);
		else if (value < array[index])
			last = index - 1;
		else
			first = index + 1;
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
