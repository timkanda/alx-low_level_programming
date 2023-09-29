#include "main.h"

/**
*print_triangle - prints a triangle
*@size: size of the triangle
*Return: # is printed
*/
void print_triangle(int size)
{
	int le, he, wi;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for  (he = 0; he <= (size - 1); he++)
		{
			for (le = 0; le < (size - 1) - he; le++)
			{
				_putchar(' ');
			}
		for (wi = 0; wi <= he; wi++)
		{
			_putchar('#');
		}

		_putchar('\n');
		}
	}
}
