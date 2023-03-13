#include "main.h"
#include <stdlib.h>

/**
 * free-grid -2d grid
 * @grid: 2d functional  grid
 * @height: grid
 *
 * Return:
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
