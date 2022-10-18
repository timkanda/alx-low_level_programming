#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_strdup - returns pointer to newly allocated memory
*@str: character input
*
*Return: NULL if str is Null
*/
char *_strdup(char *str)
{
	int i, k;
	char *arr;

	if (str == NULL)
		return (NULL);
	for (k = 0; k <= *str; k++)
	{
	}
	k += 1;
	arr = malloc(sizeof(char) * k);

	for (i = 0; i < k; i++)
		arr[i] = str[i];

	if (arr == NULL)
		return (NULL);
	return (arr);
}
