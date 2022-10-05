#include <stdio.h>
#include <math.h>
#include "search_algos.h"

int _linear_search(int *array, int lower, int top, int value);

/**
 * jump_search - performs a jump search algorithm
 *
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched for
 *
 * Return: index of value if found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	int block, step, index, top, lower;

	if (array == NULL)
		return (-1);

	block = sqrt((int)size);
	step = 0;
	index = 0;

	for (; block * step <= (int)size; step++)
	{
		top = block * (step + 1);
		lower = block * step;
		printf("Value checked array[%d] = [%d]\n", lower, array[lower]);
		if (value <= array[top])
		{
			index = _linear_search(array, lower, top, value);
			return (index);
		}
	}

	return (-1);
}

/**
 * _linear_search - performs a linear search on array
 *
 * @array: array to be searched against
 * @lower: starting index
 * @top: stopping index
 * @value: value to be checked against
 *
 * Return: index of the value if found, -1 otherwise
 */
int _linear_search(int *array, int lower, int top, int value)
{
	int index;

	printf("Value found between indexes [%d] and [%d]\n", lower, top);
	for (index = lower; index <= top; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}

	return (-1);
}
