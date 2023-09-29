#include "main.h"

/**
*times_table - a function that prints the 9 times table
*ro = row, col = column, a = current number
*Return: times_table
*/
void times_table(void)
{
	int ro, col, a;

	for (ro = 0; ro < 10; ro++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col < 10; col++)
		{
			a = (ro * col);
			if ((a / 10) > 0)
			{
				_putchar((a / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((a % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');

	}
}
