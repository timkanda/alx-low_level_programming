#include "main.h"

/**
*_strcpy - function that compies the string
*@src: the character pointer
*@dest: pointer
*Return: returns pointer to desk
*/
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);

}
