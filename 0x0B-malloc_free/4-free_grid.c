#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D array
 * previously created by alloc_grid
 * @grid: pointer to 2D array
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Free each row of the grid */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Free the entire grid */
	free(grid);
}
