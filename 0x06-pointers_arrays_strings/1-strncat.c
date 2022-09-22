#include "main.h"

/**
*_strncat - concatenates two strings
*@dest: character input
*@src: character input
*@n: integer input
*Return: returns dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int b = 0;
	int c = 0;

	while (dest[b] != '\0')
		b++;
	while (src[c] != '\0' && c < n)
	{
		dest[b] = src[c];
		b++;
		c++;
	}
	return (dest);
}
