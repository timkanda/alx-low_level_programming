#include "main.h"
#include <unistd.h>

/**
*print_rev - prints a string in reverse
*@s: the string to be printed
*Return: Returns the reversed string
*/
void print_rev(char *s)
{
	int i, len;

	while (s[i++])
		len++;
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
