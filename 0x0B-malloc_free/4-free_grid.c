#include "main.h"

/**
 * free_grid - function to free grid
 * @grid: space in memory
 * @height: array height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
