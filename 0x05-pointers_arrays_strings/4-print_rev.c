#include "main.h"

/**
*print_rev - prints a string in reverse
*@s: the string to be printed
*Return: Returns the reversed string
*/
void print_rev(char *s)
{
	if (*s)
	{
		print_rev(s + 1);
		print_rev(s);
	}
}
