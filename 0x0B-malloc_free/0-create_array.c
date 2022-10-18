#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
**create_array - creates an array of characters
*@size: unsigned integer
*@c: character input
*Return: NULL when the size is 0, otherwise pointer to array
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
