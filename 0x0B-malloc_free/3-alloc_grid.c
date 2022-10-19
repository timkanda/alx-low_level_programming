#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*alloc_grid - returns a pointer to a 2 dimensional array of integers
*@width: integer input
*@height: integer input
*
*Return: NULL when width and height is 0, otherwise pointer
*/
int **alloc_grid(int width, int height)
{
	int i, x;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr == NULL)
		{
			free(arr);
			return (NULL);
		}
		for (x = 0; x < width; x++)
		{
			arr[i][x] = 0;
		}
	}
	return (arr);
}
