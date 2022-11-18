#include "main.h"

/**
*clear_bit - sets value of bit to 0
*@n: pointer int
*@index: index
*Return: 0
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (n == NULL)
		return (-1);

	bits = 1 << index;

	if ((bits | *n) == *n)
		*n = *n ^ bits;
	return (1);
}
