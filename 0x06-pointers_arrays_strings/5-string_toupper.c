#include "main.h"

/**
*string_toupper - lowercase to uppercase
*@k: character input
*Return: capitalized string
*/
char *string_toupper(char *k)
{
	int i;

	for (i = 0; k[i] != '\0'; i++)
	{
		if (k[i] >= 'a' && k[i] <= 'z')
			k[i] = k[i] - 32;
	}
	return (k);
}
