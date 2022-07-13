#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2-d grid of integers
 *
 * @grid: pointer to 2-d array of integers
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);

	free(grid);
}
