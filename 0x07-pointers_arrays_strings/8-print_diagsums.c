#include "main.h"
#include <stdio.h>

/**
*print_diagsums - prints the sum of the two diagonals
*@a: input
*@size: input
*Return: Always 0
*/
void print_diagsums(int *a, int size)
{
	int i, k, tot1 = 0, tot2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		tot1 = tot1 + a[i];

	for (k = size - 1; k <= (size * size) - size; k = k + size - 1)
		tot2 = tot2 + a[k];
	printf("%d, %d\n", tot1, tot2);
}
