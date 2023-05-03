#include <stdlib.h>
#include "main.h"

/**
 * free_grid - check code for free_grid
 * @grid: pointer to a 2 dimensional array input
 * @height: height of grid
 * Description: functions for free_grid, it frees a 2dimensional,
 * array of height and width.
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int iter = 0;

	for (; iter < height; iter++)
	{
		free(grid[iter]);

	}

	free(grid);
}
