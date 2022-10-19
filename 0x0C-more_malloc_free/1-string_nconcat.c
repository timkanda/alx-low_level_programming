#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*string_nconcat - concatenates two strings
*@s1: input character
*@s2: input character
*@n: unsigned integer
*Return: 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, x, con1, con2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (x = 0; s2[x] != '\0'; x++)
	{
	}
	if (n < x)
		x = n;
	x += i;

	arr = malloc(sizeof(char *) * (x + 1));

	if (arr == NULL)
		return (NULL);
	for (con1 = 0; con1 < i; con1++)
		arr[con1] = s1[con1];
	for (con2 = 0; con2 < x; con2++)
	{
		arr[con1] = s2[con2];
		con1++;
	}
	con1++;
	arr[con1] = '\0';
	return (arr);
}
