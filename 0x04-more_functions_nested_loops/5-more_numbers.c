#include "main.h"

/**
*more_numbers - prints 10 the numbers
*
*Return: Nothing
*/
void more_numbers(void)
{
	int i, nu;

	for (nu = 0; nu < 10; nu++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar ((i / 10) + '0');
			}

			_putchar((i % 10) + '0');
		}

		_putchar('\n');
	}
}
