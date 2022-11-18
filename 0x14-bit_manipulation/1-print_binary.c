#include "main.h"

/**
*print_binary - prints binary representation
*@n: int input
*
*Return: void
*/
void print_binary(unsigned long int n)
{
	int i = 0, ans, c, temp;

	if (n == 0)
	{
		printf("0");
		return;
	}
	temp = n;

	while (temp != 0)
	{
		i++;
		temp = temp >> 1;
	}
	for (ans = i - 1; ans >= 0; ans--)
	{
		c = n >> ans;
		if (c & 1)
			printf("1");
		else
			printf("0");
	}
}
