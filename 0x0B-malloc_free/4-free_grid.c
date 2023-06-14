#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free memory
 * @grid: - grid
 * @height: - height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (!grid)
		return;
	if (!grid[0])
		return;
	while (height-- > 0)
		free(grid[height]);
	free(grid);
}
