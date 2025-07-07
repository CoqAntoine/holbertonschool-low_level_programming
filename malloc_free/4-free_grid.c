#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: Pointer to the 2D array.
 * @height: Number of rows in the grid.
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	while(height)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}
