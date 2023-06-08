#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to  2D array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid1;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	grid1 = malloc(height * sizeof(int *));
	if (grid1 == NULL)
	{
		/*free(grid1);*/
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid1[i] = malloc(width * sizeof(int));
		if (grid1[i] == NULL)
		{
			/*for (i--; i >= 0; i--)
				free(grid1[i]);
			free(grid1);*/
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid1[i][j] = 0;

	return (grid1);
}
