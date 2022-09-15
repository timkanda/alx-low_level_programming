#include "main.h"

/**
*_islower - check for lowercase character
*@c: Single character input
*Return: 1 is returned if c is lowercase, 0 if otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
