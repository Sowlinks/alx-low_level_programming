#include "main.h"
#include <stdlib.h>

/**
 * free_grid- frees a 2 dimenstional array
 * @grid: pointer to grid to be freed
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
