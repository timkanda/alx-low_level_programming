#include "main.h"
#include <string.h>

/**
*_strcat - concatenates two strings
*@dest: input character
*@src: input character
*Return: returns dest
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int k;

	for (i = 0; dest[i] != '\n'; i++)
	{
	}
	for (k = 0; (dest[i + k] = *src++) != '\0'; k++)
	{
	}
	return (dest);
}
