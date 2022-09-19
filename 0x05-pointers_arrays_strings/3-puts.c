#include "main.h"
#include <stdio.h>

/**
*_puts - prints a string
*@str: the string to print
*Return: strin is printed to stdout
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
