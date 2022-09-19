#include "main.h"

/**
*swap_int - Swaps the values of twon integers
*@a: first integer
*@b: the second integer
*Return: Nothing
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

