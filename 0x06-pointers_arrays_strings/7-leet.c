#include "main.h"

/**
*leet - encodes the string
*@m: input character
*Return: Always 0
*/
char *leet(char *m)
{
	int i, y;

	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacer[] = {'4', '3', '0', '7', '1'};

	for  (i = 0; m[i] != '\0'; i++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (m[i] == find[y])
			{
				m[i] = replacer[y / 2];
				y = 9;
			}
		}
	}
	return (m);
}
