#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a 2-d array of integers
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to grid if successful
 *	   NULL if width / height < 1
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int h, w;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (!arr)
	{
		free(arr);
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		arr[h] = malloc(sizeof(int) * width);
		if (!arr[h])
		{
			for (; h >= 0; h--)
				free(arr[h]);
			free(arr);

			return (NULL);
		}
		for (w = 0; w < width; w++)
			arr[h][w] = 0;
	}

	return (arr);
}
