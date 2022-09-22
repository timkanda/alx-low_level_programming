#include "main.h"
/**
*reverse_array - reverses content of array
*@a: integer input
*@n: number of elements of the array
*Return: Always 0
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
