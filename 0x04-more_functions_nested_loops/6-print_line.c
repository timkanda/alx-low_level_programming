#include "main.h"

/**
*print_line - functions that draws a straight line on terminal
*@n: number of times character is printed
*Return: \n is returned if n is 0 or less
*/
void print_line(int n)
{
	int li;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (li = 1; li <= n; li++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}

