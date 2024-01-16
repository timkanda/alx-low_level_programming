#include "main.h"

/**
*_pow_recursion - function that return x raised power y
*@x: input
*@y: input
*Return: -1 if y is lower than 0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
