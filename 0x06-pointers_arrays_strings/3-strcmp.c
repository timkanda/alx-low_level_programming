#include "main.h"

/**
*_strcmp - a function that compare two strings
*@s1: input character
*@s2:character input
*Return: Always
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
