#include "main.h"

/**
*print_square - prints square
*@size: An integer
*Return: \n is printed if size is 0 or less
*/
void print_square(int size)
{
	int pr, sq;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (pr = 1; pr <= size; pr++)
		{
			_putchar('#');
			for (sq = 2; sq <= size; sq++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
