#include "main.h"

/**
*print_alphabet_x10 - prints alphabets ten times
*
*Return: void
*/
void print_alphabet_x10(void)
{
	int i, ti;

	ti = 0;

	while (ti < 10)
	{

		for (i = 'a'; i <= 'z'; i++)

	{
			_putchar(i);
	}

		ti++;
		_putchar('\n');
	}
}
