#include "main.h"
#include <stdlib.h>
/**
*_isupper - checks for uppercase character
*@c: integer
*Return: 1 is returned if c is uppercase, otherwise 0
*/
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);

}
