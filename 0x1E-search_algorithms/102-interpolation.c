#include <stdio.h>
#include "search_algos.h"


/**
 * interpolation_search - performs interpolation search
 *
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched for
 *
 * Return: index of the value if found, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;
	pos = 0;

	while (array[pos] != value && pos < size)
	{
		pos = (double)(high - low) / (array[high] - array[low]);
		pos = pos * (value - array[low]) + low;

		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
			printf("Value checked array[%ld] is out of range\n", pos);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
	}

	if (array[pos] == value)
		return (pos);

	return (-1);
}
