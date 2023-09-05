#include "main.h"
#include <stdlib.h>

/**
 * free_grid- frees a function
 * @grid: pointer to a pointer
 * @height: height of a grid
 * Reurn; void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
