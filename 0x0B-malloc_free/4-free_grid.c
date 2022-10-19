#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*free_grid - frees a 2 dim. grid previously created
*@grid: integer input
*@height: integer input
*
*Return: Always 0
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
