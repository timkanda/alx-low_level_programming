#include "main.h"

/**
*print_last_digit - prints the last digit of a number
*@epl: the outcome of the printing
*Return: value of the last digit
*/
int print_last_digit(int epl)
{
	int xyz;

	xyz = (epl % 10);

	if (xyz < 0)
	{
		xyz = (-1 * xyz);
	}
		_putchar(xyz + '0');

		return (xyz);
}
