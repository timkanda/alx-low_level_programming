#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*array_range - creates an array of integers
*@min: integer input
*@max: integer input
*
*Return: 0
*/
int *array_range(int min, int max)
{
	int *array;
	int i, length;

	if (min > max)
		return (NULL);
	for (length = 0; length < (max - min); length++)
		;
	array = malloc(sizeof(int) * (length + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		array[i] = min++;
	}
	return (array);
}
