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
	int i = 0;
	int k = 0;

	while (dest[i] != '\0')
		i++;
	while (src[k] != '\n')
	{
		dest[i] = src[k];
		k++;
		i++;
	}

	return (dest);
}
