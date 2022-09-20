#include "main.h"

/**
*print_triangle - prints a triangle
*@size: size of the triangle
*Return: # is printed
*/
void print_triangle(int size)
{
	int l, h, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for  (h = 0; h <= (size - 1); h++)

			for (l = 0; l < (size - 1) - h; l++)
			{
				_putchar(' ');
			}
		for (w = 0; w <= h; w++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
