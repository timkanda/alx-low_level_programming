#include "main.h"

/**
*_sqrt_recursion - returns square root of a number
*@n: input
*Return: -1 if n is not square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sroot(n, (n + 1) / 2));
}
/**
*sroot - checks number if perfect square
*@n: input
*@x: input
*Return: returns if square root
*/
int sroot(int n, int x)
{
	if (x < 1)
		return (-1);
	else if (x * x == n)
		return (x);
	else
		return (sroot(n, x - 1));
}
