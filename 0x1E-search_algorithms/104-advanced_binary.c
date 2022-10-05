#include <stdio.h>
#include "search_algos.h"


int recursive_binary(int *array, size_t start, size_t end, int value);

/**
 * advanced_binary - performs a binary search
 *
 * @array: an array to be searched
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: index of value if found, -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (recursive_binary(array, 0, size - 1, value));
}

/**
 * recursive_binary - performs binary search recursively
 *
 * @array: array to be searched
 * @start: start index for slicing array
 * @end: end index for slicing array
 * @value: value to be searched for against
 *
 * Return: index if value found, -1 otherwise
 */
int recursive_binary(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	mid = (start + end) / 2;

	if (array == NULL)
		return (-1);

	if (start == end && array[mid] != value)
		return (-1);

	if (array[mid] == value)
	{
		print_array(array, start, end);
		if (array[mid - 1] == value)
			return (recursive_binary(array, start, mid, value));
		return (mid);
	}
	else if (array[mid] < value)
	{
		print_array(array, start, end);
		return (recursive_binary(array, mid + 1, end, value));
	}
	else if (array[mid] > value)
	{
		print_array(array, start, end);
		return (recursive_binary(array, start, mid - 1, value));
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

	if (array == NULL)
		return;

	printf("Searching in array: ");
	for (i = start; i < end + 1; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}
