/**
 * array_iterator - executes an action on every element of a given array
 *
 * @array: an array
 * @size: size of array
 * @action: action function
 *
 * Return: void
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
