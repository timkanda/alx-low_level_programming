#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*str_concat - concatenates two strings
*@s1: input character
*@s2: input character
*
*Return: NULL if empty, otherwise returns pointer
*/
char *str_concat(char *s1, char *s2)
{
	int res1, res2, i = 0;
	char *arr;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";
	for (res1 = 0; res1 <= *s1; res1++)
	{
	}
	for (res2 = 0; res2 <= *s2; res2++)
	{
	}
	arr = malloc(sizeof(char) * (res1 + res2 + 1));

	if (arr == NULL)
		return (NULL);
	while (*s1)
	{
		arr[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		arr[i] = *s2;
		i++;
		s2++;
	}
	return (arr);
}






