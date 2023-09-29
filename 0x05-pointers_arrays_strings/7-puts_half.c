#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*puts_half - prints half of a string
*@str: character string
*Return: Nothing
*/
void puts_half(char *str)
{
	int i = 0, len = 0, j;

	while (str[i++])
		len++;
	if ((len % 2) == 0)
		j = len / 2;
	else
		j = (len + 2) / 2;

	for (i = j; i < len; i++)
		putchar(str[i]);
	putchar('\n');
}
