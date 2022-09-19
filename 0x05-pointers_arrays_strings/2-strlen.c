#include "main.h"

/**
*_strlen - a fuction that returns the length of a string
*@s: string character
*Return: string length is returned
*/
int _strlen(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	return (strlen);
}
