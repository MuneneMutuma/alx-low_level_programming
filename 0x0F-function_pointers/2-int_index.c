/**
 * int_index - searches for an integer
 *
 * @array: an array of integers
 * @size: size of array
 * @cmp: comparator function
 *
 * Return: index of integer if found
 *	   -1 if no element is found
 *	   -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	i = 0;
	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}

	return (-1);
}
