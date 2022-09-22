#include "main.h"

/**
*cap_string - capilizes all words of a string
*@a: character input
*Return: Always 0
*/
char *cap_string(char *a)
{
	int i, y;

	int cap = 32;
	int separators[] = {',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}', ' ', '\t', '\n'};
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - cap;
		}

		cap = 0;

		for (y = 0; y <= 13; y++)
		{
			if (a[i] == separators[y])
			{
				y = 13;
				cap = 32;
			}
		}
	}

	return (a);
}
