#include "main.h"

/**
*flip_bits -a function that flips bits
*@n: input
*@m: input int
*Return: 0
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ans = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			ans++;
		m = m >> 1;
		n = n >> 1;
	}
	return (ans);
}
