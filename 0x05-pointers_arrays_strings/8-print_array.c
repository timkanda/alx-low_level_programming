#include "main.h"
#include <stdio.h>

/**
*print_array - prints elements of an array
*@a: pointer character
*@n: integer
*Return: Nothing
*/
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;
		printf(",");
		printf(" ");
	}

	printf("\n");
}
