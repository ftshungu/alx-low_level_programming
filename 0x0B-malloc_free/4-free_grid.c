#include "main.h"
/**
 * free_grid - prints a grid of integers
 * @grid: address of 2 dimensional grid
 * @height: height of grid
 * Return: Grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
