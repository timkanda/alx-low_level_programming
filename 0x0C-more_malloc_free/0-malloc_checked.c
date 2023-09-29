#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*malloc_checked - allocates memory using malloc
*@b: unsigned input integer
*
*Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);
	return (x);
}
