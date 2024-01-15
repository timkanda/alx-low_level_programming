#include "main.h"

/**
*factorial - functions that returns factorial of given number
*@n: input
*Return: return -1 if n < 0
*/
int factorial(int n)
{
	if (n < 1)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
