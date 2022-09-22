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
	int k = strlen(src);

	for (i = 0; src[i]; i++)
	{
		dest[i + k] = src[i];
		dest[i + k] = '\0';
	}
	return (dest);
}
